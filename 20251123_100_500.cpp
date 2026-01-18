#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    for (int i = 100; i < 501; ++i) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
