#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a[] = {200,2,6,8,10,4};
    int count = sizeof(a) / sizeof(int);
    cout << "count : " << count << endl;
    int indMax = 0;
    for(int i = 0; i < count; ++i){
        if(a[i] % 2 && a[i] > a[indMax] || a[indMax] % 2 == 0){
            indMax = i;
        }    
    }
    if(a[indMax] % 2){
        cout << a[indMax];
    }else{
        cout << "net nechetnogo chisla";
    }
    return 0;
}
