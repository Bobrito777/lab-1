#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x = 2.74e-2;
    double y = -0.725;
    double z = 0.13e2;

    double biba = 1 + sin(x + y);
    double boba = fabs(z - (2 * x) / (1 + pow(x, 2) * pow(y, 2)));
    double kokosik = (biba / boba) * pow(fabs(x), fabs(y));
    double chundra = tan(1.0 / z);
    double s = kokosik + chundra;
    cout << "s= " << s << endl;
    return 0; 
}

