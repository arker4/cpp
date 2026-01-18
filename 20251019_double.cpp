#include <iostream>
using namespace std;

int main() {
    double a = 7.8, b = 4.2;
    double sum, razn, proi, del;
    sum = a + b;
    razn = a - b;
    proi = a * b;
    del = a / b;

    cout << "a + b = " << a << " + " << b << " = " << sum << endl;
    cout << "a - b = " << a << " - " << b << " = " << razn << endl;
    cout << "a / b = " << a << " / " << b << " = " << del  << endl;
    cout << "a * b = " << a << " * " << b << " = " << proi << endl;
    return 0;
}
