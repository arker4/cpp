#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    bool a = true;
    int n = 8;

    cout << "a = " << a << endl;
    cout << "n < 50:" << (n < 50) << endl;
    cout << "n > 50:" << (n > 50) << endl;
    cout << "n == 50:" << (n == 50) << endl;
    cout << "n != 50:" << (n != 50) << endl;
    cout << "n >= 50:" << (n >= 50) << endl;
    cout << "n <= 50:" << (n <= 50) << endl;
    return 0;
}
