#include<iostream>
#include<iomanip>
using namespace std;

float f(float x){
    return(x*x*x);
}
int main(){
    float a,b,h,sum;
    int n,i;
    float f(float);
    cout<<"Enter the values of a, b ";
    cin>>a>>b;
    cout<<"Enter the value of n ";
    cin>>n;

    h=(b-a)/n;
    sum=(f(a)+f(a+n*h))/2.;

    for(i=1;i<=n-1;i++) sum+=f(a+i*h);
    sum=sum*h;

    cout<<fixed<<setprecision(5)<<"The value of the integration is "<<sum;
    return 0;
}