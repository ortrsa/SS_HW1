
#include "myMath.h"


double Exponent(int x){
    float ans = 1 ;
    if(x<0){
        x=x*-1;
        for (int i =0; i<x;i++){
            ans = ans*(1/E);
        }
    }
    else{
    for (int i =0; i<x;i++){
        ans = ans*E;
    }
        
    }
    return ans;
    }

double Power(double x , int y){
    double ans =1;
    if(y<0) {
        y=y*-1;
        x=1/x;
        for (int i =0; i<y;i++){
            ans = ans*x;
        }
        
    }
    else{
    for (int i =0; i<y;i++){
        ans = ans*x;
    }
    }
    return ans;
    }

