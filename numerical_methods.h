#pragma once
#include <vector>
#include <functional>

// ���������� ����� �������� �����������������. ������� ��������

double f_derivated(double x, double y) {
	return -3.5 * y;
}

std::pair<double, double> RK4_new_point(
	std::function<double(double, double)> f, //������� dy/dx
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


// TODO: ���� ������ ����������� �� ����� ������ �������� �� ����. ���������. �� � ���-�� ��� ������������, ��� ���������� ��� �������� �����������.
std::vector<std::pair<double, double> > RungeKutta4 //����� �� 4 �������
(
	std::function<double(double, double)> f, //������� dy/dx
	double xmin, double xmax, //������ � ����� ������� ��������������
	double y0, //��������� �������
	double h=0.001, //��� ��������������
	bool control=false, //�������� �����������
	double eps=0.000001 //�������� �������� �����������
)
{
	std::vector<std::pair<double, double> > ans;
	double x = xmin, y=y0;
	ans.push_back(std::make_pair(x, y));
	for (; x <= xmax-h; ) { //���� �� ������� �������� ������ h, �� b �� ������������. FIXED
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			auto p1 = RK4_new_point(f, x, y, h);
			auto p12 = RK4_new_point(f, x, y, h / 2.0);
			auto p2 = RK4_new_point(f, p12.first, p12.second, h / 2.0);
			double s = (p2.second - p1.second) / (15.0);
			if (s > eps) h = h / 2;
			else {
				x = p1.first; y = p1.second;
				if (s < (eps / 32)) h = h * 2;
				ans.push_back(p1);
			}
		}
		
	}
	if (x + h > xmax) {
		h = xmax - x;
		if (!control) {
			auto tmp = RK4_new_point(f, x, y, h);
			x = tmp.first; y = tmp.second;
			ans.push_back(tmp);
		}
		else {
			double s;
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


