#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 73;
    int e = (n - 1) / 4 % 9 + 1;
    int p = (n-1) / 36 + 1;
    
    cout << "Квартира № " << n << ", подъехд № " << p << ", этаж № " << e;
    return 0;
}
