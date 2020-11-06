
#include "myMath.h"


double Exponent(int x){
    float ans = 1 ;
    for (int i =0; i<x;i++){
        ans = ans*E;
    }
    return ans;
    }

double Power(double x , int y){
    double ans =1;
    for (int i =0; i<y;i++){
        ans = ans*x;
    }
    return ans;
    }

