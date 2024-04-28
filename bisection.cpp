#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
float fx(float x){
    return x * x * x - x * x + 2;
}

int main(){
    float x,y,temp,fn,res,tol=.0001;
    cout<<"Enter the lower limit of interval : ";
    cin>>x;
    cout<<"Enter the higer limit of interval : ";
    cin>>y;

    do{
        res =(x+y)/2;
        fn = fx(res);

        if (fn > 0){
            y = res;
            temp = x;
        }
        if (fn < 0){
            x = res;
            temp = y;
        }
        
    }while(abs(res -temp)>tol);
    
    cout<<fixed<<setprecision(5)<<"\nThe approximate value of : x = "<<res;

    return 0;
}