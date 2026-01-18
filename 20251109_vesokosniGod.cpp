#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int y = 2800;
    if(y % 4 == 0 && y % 100 || y % 400 == 0) {
        cout << 366;
    } else {
        cout << 365;
    }
    
    return 0;
}
