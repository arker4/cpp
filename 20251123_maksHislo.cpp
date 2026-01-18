#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number = 13233311;
    int maxNum = 0, count = 0;
    for (int num = number; num; num /= 10) {
        if (num % 10 > maxNum) {
            maxNum = num % 10;
        }
    }
    cout << maxNum << " ";
    for (int num = number ; num; num /= 10) {
        if (num % 10 == maxNum){
            ++count;
        }    
    }
    cout << count;
    return 0;
}
