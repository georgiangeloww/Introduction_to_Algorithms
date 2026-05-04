#include <iostream>
using std::cin;

int main(){
    int arr[6];
    int proverki = 0;
    bool isFound = 0;

    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    for (int i = 1; i < 5; i++) {
        isFound = 0;
        for (int j = 0; j < 6; j++) {
            proverki = proverki + 1;
            if (!isFound) {
                if (arr[j] == i) {
                    std::cout << "Намерих " << i << " във факултетния номер!" << std::endl;
                    isFound = 1;
                }
            }
        }
    }
    std::cout << "Общо извършени проверки: ";
    std::cout << proverki;



    return 0;
}