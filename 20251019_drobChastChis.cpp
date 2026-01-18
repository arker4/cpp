#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double n = 374.1525;
    int part;
    part = n;

    cout << "В числе " << n << "\tдробная часть равна " << n - part << endl; 
    cout << "В числе " << n << "\tдробная часть равна " << n - (double)(int)n << endl; 
    return 0;
}
