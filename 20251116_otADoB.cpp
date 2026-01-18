#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout << "Предложите числа a и b";
    cin >> a,b;
    for(int n = a; n < b; ++n){
        cout << n << ",";
    }
    
    return 0;
}
