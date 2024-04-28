#include<iostream>
#include<iomanip>
using namespace std;

float f(float x){
    return(x*x*x);
}
int main(){
    float f(float);
    float a,b,h,sum;
    int i,n;
    cout<<"\nEnter the values of a, b ";
    cin>>a>>b;
    cout<<"Enter the value of subintervals n ";
    cin>>n;
    if(n&1) {
        cout<<"Number of subdivision should be even";
        exit(0);
    }
    h=(b-a)/n;
    sum=f(a)-f(a+n*h);
    for(i=1;i<=n-1;i+=2)
    sum+=4*f(a+i*h)+2*f(a+(i+1)*h);
    sum*=h/3.;

    cout<<fixed<<setprecision(5)<<"\nValue of the integration is "<<sum;
    return 0; 
}