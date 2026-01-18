#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double n = 374.1525;
    int b = (int)(n * 100);

    cout << "˜˜˜˜˜ ˜˜˜˜˜ " << n << "\n˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ " << (double)b / 100.0 << endl;
    cout << "˜˜˜˜˜ ˜˜˜˜˜ " << n << "\n˜˜˜˜˜˜˜˜˜˜˜ ˜˜˜˜˜ " << (double)(int)(n * 100)
 / 100.0 << endl;
    return 0;
}
