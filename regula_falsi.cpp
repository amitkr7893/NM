#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define f(x) (x*x -4)

int main()
{
    float x0 = 1, x1 = 3, tol = 0.0001, result;
    float x2 = (x0*f(x1) - x1*f(x0))/(f(x1) - f(x0));
    do{
        
        float temp = (x1*f(x2) - x2*f(x1))/(f(x2) - f(x1));
        result = temp;
        x1 = x2; 
        x2 = temp;
        
    }while(abs(x2 - x1)>tol);
    
    cout<<setprecision(5)<< fixed<<"The approximate value of x is: "<<result<<endl;
    
    return 0;
}