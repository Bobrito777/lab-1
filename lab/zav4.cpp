#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double bober;
    cout << "Ведіть кут в радіанах: ";
    cin >> bober;

    double kurva = bober * 180.0 / M_PI;
    cout << "Кут в градусах: " << kurva << endl;
    return 0;
}