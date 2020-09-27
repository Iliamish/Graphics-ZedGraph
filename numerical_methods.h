#pragma once
#include <vector>
#include <functional>

// Оформление здесь довольно экспериментальное. Заранее извините

typedef std::pair<double, double> dpair;

//ФУНКЦИИ ЗАДАЧ
double f_test(double x, double y) { // Тестовая задача
	return -3.5 * y;
}

double test_sol(double x, double y0) { // Решение тестовой задачи при x0=0, y0
	return y0*exp(-3.5 * x);
}

double f1(double x, double y) { // Задача 1
	return (1.0/(1+3.0*x+x*x))*(y*y)+y-pow(y,3)*sin(10*x); //ПРОВЕРИТЬ
}

double f2(double x, double y, double z, double a = 0, double b = 0) { // Задача 2
	return -a * sqrt((z * z) + 1) - b;
}

//std::function<double(double, double, double)> f2_t = f2; //НЕЛЬЗЯ СКАСТОВАТЬ. А ЗНАЧИТ ПРИДЕТСЯ ГДЕ-ТО ХРАНИТЬ ПАРАМЕТРЫ ИЛИ ПЕРЕПИСЫВАТЬ ЗАГОТОВКУ...

std::pair<double, double> RK4_new_point(
	std::function<double(double, double)> f, //Функция dy/dx
	double x, double y,
	double h
) {
	double k1 = f(x, y);
	double k2 = f(x + h / 2, y + h / 2 * k1);
	double k3 = f(x + h / 2, y + h / 2 * k2);
	double k4 = f(x + h, y + h * k3);
	x += h; y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
	return std::make_pair(x, y);
}


std::vector<std::pair<double, double> > RungeKutta4 //Метод РГ 4 порядка
(
	std::function<double(double, double)> f, //Функция dy/dx
	double xmin, double xmax, //Начало и конец отрезка интегрирования
	double y0, //Начальные условия
	double h=0.001, //Шаг интегрирования
	bool control=false, //Контроль погрешности
	double eps=0.000001, //Точность контроля погрешности
	unsigned int NMax=50000 //Максимальное число итераций. Только для версии с переменным шагом.
)
{
	std::vector<std::pair<double, double> > ans;
	double x = xmin, y=y0;
	ans.push_back(std::make_pair(x, y));
	unsigned int i = 0;
	for (; x <= xmax-h; ) { //Если до границы осталось меньше h, то b не используется. FIXED (А надо ли?)
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			if (i++ >= NMax) return ans; //Контроль итераций
			auto p1 = RK4_new_point(f, x, y, h);
			auto p12 = RK4_new_point(f, x, y, h / 2.0);
			auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2);
			double s = abs(p2.second - p1.second) / 15;
			if (s > eps) h = h / 2;
			else {
				x = p1.first; y = p1.second;
				if (s < (eps / 32)) h = h * 2;
				ans.push_back(p1);
			}
		}
		
	}
	//Возможно то, что написано ниже является бредом. Относитесь со скептисом.
	/*if (x + h > xmax) {
		h = xmax - x;
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			double s;
			if (i++ > NMax) return ans;
			do {
				auto p1 = RK4_new_point(f, x, y, h);
				auto p12 = RK4_new_point(f, x, y, h / 2.0);
				auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2.0);
				s = (p2.second - p1.second) / (15.0);
				if (s > eps) h = h / 2;
				else {
					x = p1.first; y = p1.second;
					ans.push_back(p1);
				}
			} while (s > eps);
	
		}
	}*/

	return ans;
}

//Какая-то странная заготовка для ОДУ 2-го порядка. NEED INFORMATION.

/*
struct vec3 {
	double x;
	double y;
	double z; //z=y'
	vec3(double _x, double _y, double _z) { x = _x; y = _y; z = _z; }
};

vec3 RK4SS_new_point(
	std::function<double(double, double,double)> f, //Функция dz/dx
	double x, double y, double z,
	double h
) {
	double q1 = f(x, y,z), k1=z;
	double q2 = f(x + h / 2, y + h / 2 * q1,z), k2=z+q1*h/2;
	double q3 = f(x + h / 2, y + h / 2 * q2,z), k3= z + q2 * h / 2;
	double q4 = f(x + h, y + h * q3,z), k4=z+q3*h;
	x += h; 
	z += h / 6 * (q1 + 2 * q2 + 2 * q3 + q4);
	y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
	return vec3(x, y, z);
}



std::vector<vec3> RungeKutta4SS //Метод РГ 4 порядка для ОДУ 2-го порядка. Можно заставить решать систему если добавить y'= V(x,y,z).
(
	std::function<double(double, double, double)> U, //Функция z'= U(x,y,z) , где z=y'
	double xmin, double xmax, //Начало и конец отрезка интегрирования
	double y0, double z0, //Начальные условия, где z
	double h = 0.001, //Шаг интегрирования
	bool control = false, //Контроль погрешности
	double eps = 0.000001, //Точность контроля погрешности
	unsigned int NMax = 50000 //Максимальное число итераций. Только для версии с переменным шагом.
)
{
	std::vector<vec3> ans;
	double x = xmin, y = y0, z=z0;
	ans.push_back(vec3(x, y, z));
	unsigned int i = 0;
	for (; x <= xmax - h; ) { //Если до границы осталось меньше h, то b не используется. FIXED (А надо ли?)
		if (!control) {
			auto tmp = RK4SS_new_point(U, x, y, z, h);
			x = tmp.x; y = tmp.y;
			ans.push_back(tmp);
		}
		else {
			if (i++ >= NMax) return ans; //Контроль итераций
			auto p1 = RK4SS_new_point(U, x, y, z, h);
			auto p12 = RK4SS_new_point(U, x, y, z, h / 2);
			auto p2 = RK4SS_new_point(U, p12.x, p12.y, p12.z, h / 2);
			double s = abs(p2.y - p1.y) / 15; // КОНТРОЛЬ ДЛЯ СИСТЕМЫ. ЧЕМУ ЖЕ РАВНО S?
			if (s > eps) h = h / 2;
			else {
				x = p1.x; y = p1.y; z = p1.z;
				if (s < (eps / 32)) h = h * 2;
				ans.push_back(p1);
			}
		}

	}
	//Возможно то, что написано ниже является бредом. Относитесь со скептисом.
	/*if (x + h > xmax) {
		h = xmax - x;
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			double s;
			if (i++ > NMax) return ans;
			do {
				auto p1 = RK4_new_point(f, x, y, h);
				auto p12 = RK4_new_point(f, x, y, h / 2.0);
				auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2.0);
				s = (p2.second - p1.second) / (15.0);
				if (s > eps) h = h / 2;
				else {
					x = p1.first; y = p1.second;
					ans.push_back(p1);
				}
			} while (s > eps);

		}
	} 
	return ans;

}
*/