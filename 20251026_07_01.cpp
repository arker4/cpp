#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout.precision(20);
    float a = 0.1, b = 0.7, c, v;
    cout << "0.1:" << a << endl;
    cout << "0.7:" << b << endl;
    c = a + b;
    cout << "0.8:" << c << endl;
    v = c * 10;
    cout << "8:" << v << endl;
    int i = v;
    cout << "i8:" << i << endl;
    return 0;
}
