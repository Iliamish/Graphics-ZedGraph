#pragma once
#include <vector>
#include <functional>

// ���������� ����� �������� �����������������. ������� ��������

typedef std::pair<double, double> dpair;

//������� �����
double f_test(double x, double y) { // �������� ������
	return -3.5 * y;
}

double test_sol(double x, double y0) { // ������� �������� ������ ��� x0=0, y0
	return y0*exp(-3.5 * x);
}

double f1(double x, double y) { // ������ 1
	return (1.0/(1+3.0*x+x*x))*(y*y)+y-pow(y,3)*sin(10*x); //���������
}

double f2(double x, double y, double z, double a, double b) { // ������ 2
	return -a * sqrt((z * z) + 1) - b;
}

//std::function<double(double, double, double)> f2_t = f2; //������ ����������. � ������ �������� ���-�� ������� ��������� ��� ������������ ���������...

struct TResults {
	std::vector<std::pair<double, double> > res_vec;
	std::vector<double> local_mistake_vec;
	std::vector<double> h_vec;
	uint64_t ND = 0;
	uint64_t NH = 0;
	//double max_local_mistake;
};


std::pair<double, double> RK4_new_point(
	std::function<double(double, double)> f, //������� dy/dx
	double x, double y,
	double h
) {
	double k1 = f(x, y);
	double k2 = f(x + (h / 2), y + (h / 2) * k1);
	double k3 = f(x + (h / 2), y + (h / 2) * k2);
	double k4 = f(x + h, y + h * k3);
	x += h; y += h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
	return std::make_pair(x, y);
}



TResults RungeKutta4 //����� �� 4 �������
(
	std::function<double(double, double)> f, //������� dy/dx
	double xmin, double xmax, //������ � ����� ������� ��������������
	double y0, //��������� �������
	double h=0.001, //��� ��������������
	bool control=false, //�������� �����������
	double eps=0.000001, //�������� �������� �����������
	uint64_t NMax=100 //������������ ����� ��������. ������ ��� ������ � ���������� �����.
)
{
	TResults Res;
	std::vector<std::pair<double, double> >& ans=Res.res_vec;
	Res.h_vec.push_back(0.0);
	double x = xmin, y=y0;
	ans.push_back(std::make_pair(x, y));
	unsigned int i = 0;
	Res.local_mistake_vec.push_back(0.0);
	for (; x < xmax-h; ) { //���� �� ������� �������� ������ h, �� b �� ������������. FIXED (� ���� ��?)
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			if (i++ >= NMax) return Res; //�������� ��������
			auto p1 = RK4_new_point(f, x, y, h);
			auto p12 = RK4_new_point(f, x, y, h / 2.0);
			auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2);
			
			double s = abs(p2.second - p1.second) / 15.0;
			if (s > eps) { h = h / 2.0; ++Res.NH; }
			else {
				x = p1.first; y = p1.second;
				Res.local_mistake_vec.push_back(p2.second - p1.second);
				Res.h_vec.push_back(h);
				if (s < (eps / 32)) {
					h = h * 2; ++Res.ND;
				}
				ans.push_back(p1);
			}
		}
		
	}
	//�������� ��, ��� �������� ���� �������� ������. ���������� �� ���������.
	if (x + h >= xmax) {
		h = xmax - x;
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			double s;
			if (i++ > NMax) return Res;
			do {
				auto p1 = RK4_new_point(f, x, y, h);
				auto p12 = RK4_new_point(f, x, y, h / 2.0);
				auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2.0);
				
				s = abs(p2.second - p1.second) / (15.0);
				if (s > eps){ h = h / 2; ++Res.NH;}
				else {
					Res.local_mistake_vec.push_back(p2.second - p1.second);
					Res.h_vec.push_back(h);
					x = p1.first; y = p1.second;
					ans.push_back(p1);
				}
			} while (s > eps);
	
		}
	}

	return Res;
}

//�����-�� �������� ��������� ��� ��� 2-�� �������. NEED INFORMATION.


struct vec3 {
	double x;
	double y;
	double z; //z=y'
	vec3(double _x, double _y, double _z) { x = _x; y = _y; z = _z; }
};

struct TResultsSS {
	std::vector<vec3 > res_vec;
	std::vector<double> local_mistake_vec;
	std::vector<double> h_vec;
	uint64_t ND = 0;
	uint64_t NH = 0;
	//double max_local_mistake;
};

vec3 RK4SS_new_point(
	std::function<double(double, double,double,double,double)> f, //������� dz/dx
	double x, double y, double z,
	double h,
	double a, double b
) {
	double q1 = f(x, y,z,a,b), k1 = z;
	double q2 = f(x + h / 2, y + h / 2 * q1, z, a, b), k2 = z + q1 * h / 2;
	double q3 = f(x + h / 2, y + h / 2 * q2, z, a, b), k3 = z + q2 * h / 2;
	double q4 = f(x + h, y + h * q3, z, a, b), k4 = z + q3 * h;
	x += h; 
	z += h  * (q1 + 2 * q2 + 2 * q3 + q4) / 6.0;
	y += h * (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
	return vec3(x, y, z);
}



TResultsSS RungeKutta4SS //����� �� 4 ������� ��� ��� 2-�� �������. ����� ��������� ������ ������� ���� �������� y'= V(x,y,z).
(
	std::function<double(double, double, double, double, double)> U, //������� z'= U(x,y,z) , ��� z=y'
	double xmin, double xmax, //������ � ����� ������� ��������������
	double y0, double z0, //��������� �������, ��� z
	double h = 0.001, //��� ��������������
	double a = 1.0, double b = 0.0,
	bool control = false, //�������� �����������
	double eps = 0.000001, //�������� �������� �����������
	unsigned int NMax = 500 //������������ ����� ��������. ������ ��� ������ � ���������� �����.
)
{
	TResultsSS Res;
	std::vector<vec3>& ans=Res.res_vec;
	Res.local_mistake_vec.push_back(0.0);
	Res.h_vec.push_back(0.0);
	double x = xmin, y = y0, z=z0;
	ans.push_back(vec3(x, y, z));
	unsigned int i = 0;
	for (; x < xmax - h; ) { //���� �� ������� �������� ������ h, �� b �� ������������. FIXED (� ���� ��?)
		if (!control) {
			auto tmp = RK4SS_new_point(U, x, y, z, h,a,b);
			x = tmp.x; y = tmp.y;
			ans.push_back(tmp);
		}
		else {
			if (i++ >= NMax) return Res; //�������� ��������
			auto p1 = RK4SS_new_point(U, x, y, z, h,a,b);
			auto p12 = RK4SS_new_point(U, x, y, z, h / 2,a,b);
			auto p2 = RK4SS_new_point(U, p12.x, p12.y, p12.z, h / 2,a,b);
			double etmp = sqrt(abs((p2.y - p1.y) * (p2.z - p1.z)));
			double s = etmp / 15; // �������� ��� �������. ���� �� ����� S?
			if (s > eps) { h = h / 2; ++Res.NH; }
			else {
				Res.local_mistake_vec.push_back(etmp);
				Res.h_vec.push_back(h);
				x = p1.x; y = p1.y; z = p1.z;
				if (s < (eps / 32)) {
					h = h * 2; ++Res.ND;
				}
				ans.push_back(p1);
			}
		}

	}
	//�������� ��, ��� �������� ���� �������� ������. ���������� �� ���������.
	if (x + h >= xmax ) {
		h = xmax - x;
		if (!control) {
			auto tmp = RK4SS_new_point(U, x, y, z, h,a,b);
			x = tmp.x; y = tmp.y;
			ans.push_back(tmp);
		}
		else {
			if (i++ >= NMax) return Res; //�������� ��������
			auto p1 = RK4SS_new_point(U, x, y, z, h,a,b);
			auto p12 = RK4SS_new_point(U, x, y, z, h / 2, a, b);
			auto p2 = RK4SS_new_point(U, p12.x, p12.y, p12.z, h / 2, a, b);
			double etmp = sqrt(abs((p2.y - p1.y) * (p2.z - p1.z)));
		
			double s = etmp / 15; // �������� ��� �������. ���� �� ����� S?
			if (s > eps) { h = h / 2; ++Res.NH; }
			else {
				Res.local_mistake_vec.push_back(etmp);
				Res.h_vec.push_back(h);
				x = p1.x; y = p1.y; z = p1.z;
				ans.push_back(p1);
			}
			 while (s > eps);
		}
	} 
	return Res;

}