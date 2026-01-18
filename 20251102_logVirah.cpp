#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 3, b = 100;
    bool res;
    res = (a < b) && (b == 10);
    cout << "res:" << res << endl;
    res = (a < b) || (b == 10);
    cout << "res:" << res << endl;
    res = !(a == 1 &&(b<=20 || true));
    cout << "res:" << res << endl;
    return 0;
}
