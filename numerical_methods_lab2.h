#pragma once
#include <vector>
#include <functional>
#include <algorithm>


/*********** Лабораторная работа #2 **********/

/*                                         Вариант №7                                       */
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
void straightRun(const  std::vector <double>& longDiag, const  std::vector <double>& shortDiagUp, const  std::vector <double>& shortDiagDown, const  std::vector<double> &answer, std::vector<double>& alphas,  std::vector <double> &betas) {
    alphas.push_back(-shortDiagUp.at(0) / longDiag.at(0));
    betas.push_back(answer.at(0)/longDiag.at(0));
    for (size_t i = 1; i < longDiag.size()-1; i++) {
        alphas.push_back(-shortDiagUp.at(i) / (longDiag.at(i) + shortDiagDown.at(i-1) * alphas.at(i-1)));
        betas.push_back((answer.at(i) - shortDiagDown.at(i-1) * betas.at(i - 1)) / (longDiag.at(i) + shortDiagDown.at(i-1) * alphas.at(i-1)));
    }
    alphas.push_back(0);
    betas.push_back((answer.back() - shortDiagDown.back() * betas.back()) / (longDiag.back() + shortDiagDown.back() * alphas.back()));
}
void backRun(double an, double cn, double answern,const  std::vector <double> &alphas, const  std::vector <double>& betas, std::vector<double>& x) {
    x.push_back((answern - an * betas.back()) / (cn + an * alphas.back()));
    size_t sz = alphas.size();
    for (size_t i = sz-1; i >0; i--) {
        x.push_back(alphas.at(i - 1) * x.back() + betas.at(i - 1));
    }
}
 std::vector<double>  tridiagonalMatrixAlg(const  std::vector <double> &longDiag, const  std::vector <double>&shortDiagUp, const  std::vector <double> &shortDiagDown, const  std::vector <double> &answer) {
    if (shortDiagUp.size() != shortDiagDown.size() || longDiag.size() == shortDiagDown.size()) {
        throw 1;
    }
    else {
        double a = 3.75/5.75;
        double b =5.75/3.75;
        double c = 2.25 / 3.25;
        double d = 3.25 / 2.25;
        d = a*d*b*c ;
         std::vector <double> alphas;
         std::vector <double> betas;
        straightRun(longDiag, shortDiagUp, shortDiagDown, answer, alphas, betas); // Прямой ход 
         std::vector<double> x;
        backRun(shortDiagDown.back(), longDiag.back(), answer.back(), alphas, betas, x); // 
        std::reverse(x.begin(), x.end());
        return x;
    }
   
}