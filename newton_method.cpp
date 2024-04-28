#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

double func(double x) {
    return x * x - 4;
}
double derivative(double x) {
    return 2 * x;
}

int main() {
    double x = 1.0;
    double tol = 0.0001;

    while (1) {
        double fx = func(x);
        double dfx = derivative(x);
        
        if (fabs(dfx) < 1e-10) {
            cout << "Derivative too close to zero. Newton's method cannot continue." << endl;
            return 0;
        }
        double dx = -fx / dfx;
        x = x + dx;

        if (fabs(dx) < tol) {
            break;
        }
    }
    cout<<setprecision(5)<< fixed<<"\nThe approximate value of : x = "<<x;

    return 0;
}