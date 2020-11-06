#include <stdio.h>
#include "myMath.h"

int main(){
    double x;
    printf("This program calculates several functions for a given value, pleas enter a real number:  ");
    scanf("%lf" , &x);
    double fx1 = add(Exponent((int)x), sub(Power(x, 3), 2));
    double fx2 = add(mul(x, 3),mul(Power(x, 2),2 ) );
    double fx3 = sub(Div(mul(Power(x, 3), 4), 5) , mul(x, 2));
    printf("the answar for f(x) = e^x + 𝑥^3 − 2 while x = %0.2lf is : %0.4lf \n" ,x , fx1);
    printf("the answar for f(x) = 3x + 2X^2 while x = %0.2lf is: %0.4lf \n" ,x, fx2);
    if(x!=2.5){
    printf("the answar for f(x) = (4x^3)/5 -2x while x = %0.2lf is: %0.4lf \n" , x,fx3);
    }
    else{
        printf("this function divided by 0! \n");
                }
   
    return 0;
}
