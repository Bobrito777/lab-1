#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    double x = 0.00274;
    double y = 0.725;
    double z = 13.0;

    double A = 1.0 + sin(x + y);
    double biba = z - 2.0 * x;
    double boba = 1.0 + x * x * y * y;
    
    double B = fabs(biba/boba);
    double C = fabs(x) * fabs(y);
    double D = tan(1.0 / z);

    double s = A / (B * (C + D));
    cout.setf(std::ios::fixed);
    cout << "Біба:  \n";
    cout << "s = (A / B)* (C + D) = " << s <<"\n";
    return 0;
}

