#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int countUni = n % 10;
    int countDec = n / 10 % 10; 
    int countHun = n / 100;
    int res = countUni * countDec * countHun;

    cout << res << endl;
       
    return 0;
}
