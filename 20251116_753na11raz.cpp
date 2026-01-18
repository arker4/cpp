#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    for(int i = 1; i < 29999; i += 2){
        cout << i << ",";
    }
    
    return 0;
}
