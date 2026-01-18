#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 1; i < 100; ++i) {
        if (i % 13 == 0){
            cout << i << ", ";
        }
    }

    for (int i = 13; i < 100; i += 13) {
        cout << i << ", ";
    }
    return 0;

}
