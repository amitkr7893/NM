#include <iostream>
#include<iomanip>
using namespace std;
float y(float x){
	return (1 / (1 + x));
}

float BooleRule(float a, float b){
	int n = 4;
	int h;

	h = ((b - a) / n);
	float sum = 0;
	float bl = ((7 * y(a) + 
				32 * y(a + h) +
				12 * y(a + 2 * h) + 
				32 * y(a + 3 * h) + 
				7 * y(a + 4 * h)) *
				2 * h / 45);
	sum = sum + bl;
	return sum;
}
int main(){
	float lower,upper;
    cout << "Enter lower limit : ";
    cin >> lower;
    cout << "Enter upper limit : ";
    cin >> upper;
	
	cout<<fixed<<setprecision(5)<<"The value of integration : "<<BooleRule(lower, upper);
	return 0;
}