#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout.precision(20);
    for(double i = 1.5; i <= 10.301; i += 0.4){
        cout << i << ", ";
    }
    return 0;
}
