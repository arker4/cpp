#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int c = 0;
    for(int n = 100; n < 1000; ++n){
        bool isSimple = true;
        if(n % 2 == 0)
            isSimple = false;
        for (int d = 3; d < sqrt(n) && isSimple; d += 2, ++c){
            if(n % d == 0){
                isSimple = false;
            }
        }
        if (isSimple){
        cout << n << "\t";
        }
    }
    cout << "count:" << c;
    return 0;
}
