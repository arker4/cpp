#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x = 7, y = -30, z = -33;
    if(x > z) {
        int tmp = x;
        x = z;
        z = tmp;
    }
    if(x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    if(y > z) {
        int tmp = y;
        y = z;
        z = tmp;
    }
    cout << x << " < " << y << " < " << z << endl;
    return 0; 
}
