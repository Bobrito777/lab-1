#include <iostream>
using namespace std;

int main(){
    int A = 1, B = 2, C = 3;
    cout << "початкові значення: А = " << A << " B = " << B << " C = " << C << endl;

    A = A + C;
    C = A - C;
    A = A - C;

    cout << "Після заміни А і С, А = " << A << " B = " << B << " C = " << C << endl;
    C = C + B;
    B = C - B;
    C = C - B;
    cout << "Після заміни C і B, А = " << A << " B = " << B << " C = " << C << endl;
    B = B + A;
    A = B - A;
    B = B - A;
    cout << "Після заміни B і A, А = " << A << " B = " << B << " C = " << C << endl;
    return 0;

}
