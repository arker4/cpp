#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int sum = 0, m;
    for (int i = 0; ; ++i) {
        cout << "a" << i << ": ";
        cin >> m;
        sum += m;
        cout << "sum:" << sum << endl;
    }
    return 0;
}
