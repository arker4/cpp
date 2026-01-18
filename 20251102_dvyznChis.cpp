#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 32;
    if(n / 10 == 3 || n % 10 == 3){
        cout << "Число 3 входит в " << n << endl;
    } else{
        cout << "Число 3 не входит в " << n << endl;
    } 

    
    return 0;
}
