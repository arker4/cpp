#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a[5] = {300, 500, 190, 200, 800};
    int b = 0;
    for(int i = 1; i < 5; ++i){
        if(a[i] > a[b]) {
            b = i;
        }
    }
    cout << "kiosok : " << b << endl <<  "stoimoct : " << a[b] << endl;
    return 0;
}
