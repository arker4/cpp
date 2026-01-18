#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    bool isNeedOpen;
    bool isRain = true;
    bool isOnStreet = true;
    bool isHaveUmbr = true;
    bool isOpen = false;
    
    isNeedOpen = isRain && isOnStreet && isHaveUmbr && !isOpen;
    if(isNeedOpen){
        cout << "открыть зонт" << endl;
        isOpen = true;
    }
    return 0;
}
