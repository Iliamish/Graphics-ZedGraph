#pragma once
#include <vector>
#include <algorithm>
#include "Frac.h"
#include <math.h>
#include <functional>
#include <iostream>



/*********** ������������ ������ #2 **********/

/*                                         ������� �7                                       */
    //   ksi =  pi/4                                                                                    
   //   mu1 = 1                                                                                    
   //   mu2 =  1                                                                                 
   //   k1(x) = sqrt(2)*cos(x)                                                           
   //   k2(x) = 2                                                                                  
   //   q1(x) = x 
   //   q2(x) = x*x
   //   f1(x) = sin(2x)
   //   f2(x) = sin(x)

   /*****************************************/

const  double  PI_4 = atan(1);

double  q1Test(double x) {
    return PI_4 ;
}
double q2Test(double x) {
    return PI_4 * PI_4;
}
double  k1Test(double x) {
    return 2;
}
double k2Test(double x) {
    return 2;
}
double  f1Test(double x) {
    return 1;
}
double f2Test(double x) {
    return sqrt(2)/2;
}
void straightRun(const  std::vector <double>& longDiag, const  std::vector <double>& shortDiagUp, const  std::vector <double>& shortDiagDown, const  std::vector<double>& answer, std::vector<double>& alphas, std::vector <double>& betas) {
    alphas.push_back(-shortDiagUp.at(0) / longDiag.at(0));
    betas.push_back(answer.at(0) / longDiag.at(0));
    for (size_t i = 1; i < longDiag.size() - 1; i++) {
        alphas.push_back(-shortDiagUp.at(i) / (longDiag.at(i) + shortDiagDown.at(i - 1) * alphas.at(i - 1)));
        betas.push_back((answer.at(i) - shortDiagDown.at(i - 1) * betas.at(i - 1)) / (longDiag.at(i) + shortDiagDown.at(i - 1) * alphas.at(i - 1)));
    }
    betas.push_back((answer.back() - shortDiagDown.back() * betas.back()) / (longDiag.back() + shortDiagDown.back() * alphas.back()));
    alphas.push_back(double(0));
}
void backRun(double an, double cn, double answern, const  std::vector <double>& alphas, const  std::vector <double>& betas, std::vector<double>& x) {
    x.push_back(betas.back());
    size_t sz = alphas.size();
    for (size_t i = 1; i < sz; i++) {
        x.push_back(alphas.at(sz - i - 1) * x.back() + betas.at(sz - i - 1));
    }
}
std::vector<double>  tridiagonalMatrixAlg(const  std::vector <double>& longDiag, const  std::vector <double>& shortDiagUp, const  std::vector <double>& shortDiagDown, const  std::vector <double>& answer) {
    if (shortDiagUp.size() != shortDiagDown.size() || longDiag.size() == shortDiagDown.size()) {
        throw 1;
    }
    else {
        std::vector <double> alphas;
        std::vector <double> betas;
        straightRun(longDiag, shortDiagUp, shortDiagDown, answer, alphas, betas); // ������ ��� 
        std::vector<double> x;
        backRun(shortDiagDown.back(), longDiag.back(), answer.back(), alphas, betas, x); // �������� ���
        std::reverse(x.begin(), x.end());
        return x;
    }

}

void tfunc(double start,double b,int n,double ksi,std::function<double(double)> k1, std::function<double(double)> k2, std::function<double(double)> q1, std::function<double(double)> q2, std::function<double(double)> f1, std::function<double(double)> f2) {
    std::vector<double> a;
    std::vector<double> d;
    std::vector<double> phi;
    double h = (double)1 / n;
    bool isChangedStep = false;
    bool isChangedHalfStep = false;
    double x = start;
    for (int i = 1;i<=n; i++) {
       x += h;
        if (x <= ksi) {
            a.push_back(1/((1/k1(x)+1/k1(x-h))/2));
        }
        else {
            if (isChangedStep) {
                a.push_back(1 / ((1 / k2(x) + 1 / k2(x - h)) / 2));
            }
            else {
                if (x - h != ksi) {
                    a.push_back(1/((((1 / k1(x-h) + 1 / k1(ksi)) / 2)*(ksi-x+h)+ ((1 / k2(ksi) + 1 / k2(x))*(x-ksi) / 2))/h));
                }
                else {
                    a.push_back(1 / ((1 / k2(x) + 1 / k2(x - h)) / 2));
                }
                isChangedStep = true;
            }
        }
        if (i < n) {
            if (x + h / 2 <= ksi) {
                d.push_back((q1(x + h / 2) + q1(x - h / 2) )/2);
                phi.push_back((f1(x + h / 2) + f1(x - h / 2) )/2);
            }
            else if (x - h / 2 >= ksi) {
                d.push_back((q2(x + h / 2) + q2(x - h / 2) )/2);
                phi.push_back((f2(x + h / 2) + f2(x - h / 2) )/2);
            }
            else {
                d.push_back(((q1(x-h/2)+q1(ksi))*(ksi-x+h/2)/2+ (q2(x + h / 2) + q2(ksi)) * (x+h/2-ksi) / 2)/h);
                phi.push_back(((f1(x - h / 2) + f1(ksi)) * (ksi - x + h / 2) / 2 + (f2(x + h / 2) + f2(ksi)) * (x+h/2 - ksi) / 2) / h);
            }
        }
       
    }
    std::vector<double> longDiag;
    std::vector<double> shortUP;
    std::vector<double> shortDown;
    std::vector<double> answer;
    answer.push_back(1);
    longDiag.push_back(1);
    shortUP.push_back(0);

    for (int i = 0; i < n - 1; i++) {
       double db =  -a.at(i) - a.at(i + 1);
        longDiag.push_back((-a.at(i) - a.at(i + 1)) / (h * h) - d.at(i));
        shortUP.push_back(a.at(i + 1)/(h*h));
        shortDown.push_back(a.at(i)  / (h * h));
        answer.push_back(-phi.at(i));
    }
    answer.push_back(1);
    longDiag.push_back(1);
    shortDown.push_back(0);
    tridiagonalMatrixAlg(longDiag, shortUP, shortDown, answer);


}


