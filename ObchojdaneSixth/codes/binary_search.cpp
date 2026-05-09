#include <iostream>
using std::cin;
using std::cout;

int main(){
    int n;
    cout << "Въведи големина на масива: ";
    cin >> n;
    char search;
    std::cout << "Въведи търсеното число: ";
    std::cin >> search;

    int iBeg = 1;
    int iEnd = n;
    int iMid = 1;
    bool isFound = 0;
    int iterCnt = 0;
    char* A = new char[n + 1];
    
    for (int i = 1; i < n + 1; i++) {
        std::cin >> A[i];
    }


    while(iBeg <= iEnd && !isFound) {
        iMid = (iBeg + iEnd) / 2;
        iterCnt++;
        if (A[iMid] > search) {
            iEnd = iMid - 1;
        }
        else if (A[iMid] < search) {
            iBeg = iMid + 1;
        }
        else {
            isFound = 1;
        }
        
        cout << "iBeg = " << iBeg << ' ';
        cout << "iEnd = " << iEnd << std::endl;
    }
    
    if (isFound) {
        std::cout << search << " е намерено!";
    }
    else {
        std::cout << search << " НЕ е намерено";
    }
    cout << "\nБроя на пътите, в който е търсена стойността " << iterCnt;

    if (A != nullptr) { 
        delete[] A;
   }

    return 0;
}