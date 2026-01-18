#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 786, d = 365;
    //cin >> n;
    //cin >> d;
    cout << "Ост от деления:" << n % d << endl;
    int intPart = n / d;
    int total = intPart * d;
    int modulo = n - total;
    
    cout << "Остаток от деления:" << modulo << endl;
    return 0;
}
