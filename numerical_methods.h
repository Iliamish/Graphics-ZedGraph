#pragma once
#include <vector>
#include <functional>

// ���������� ����� �������� �����������������. ������� ��������

double f_derivated(double x, double y) {
	return -3.5 * y;
}

std::vector<std::pair<double, double> > RungeKutta4_wo_control //����� �� 4 ������� � ���������� �����
(
	std::function<double(double, double)> f, //������� dy/dx
	double xmin, double xmax, //������ � ����� ������� ��������������
	double y0, //��������� �������
	double h=0.001 //��� ��������������
)
{
	std::vector<std::pair<double, double> > ans;
	double x = xmin, y=y0;
	ans.push_back(std::make_pair(x, y));
	for (; x <= xmax; ) { //�������� ����� �� �������. ����������!!!
		double k1 = f(x, y);
		double k2 = f(x + h / 2, y + h / 2 * k1);
		double k3 = f(x + h / 2, y + h / 2 * k2);
		double k4 = f(x + h, y + h * k3);
		x += h; y += h/6 * (k1 + 2 * k2 + 2 * k3 + k4);
		ans.push_back(std::make_pair(x, y));
	}
	return ans;
}


