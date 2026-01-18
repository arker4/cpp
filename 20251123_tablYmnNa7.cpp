#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 1; i <=10; ++i) {
        cout << i << " * 7 = " << (i * 7 < 10? " " : "") << i * 7 << endl;
    }
    return 0;
}
