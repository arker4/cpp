#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;

    cout << "a: " << a << " b: " << b << endl;
    a = b;
    b = a;
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}
