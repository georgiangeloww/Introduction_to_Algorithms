#include <iostream>
using std::cin;

int main(){
    int arr[6];
    
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    int proverki = 0;
    for (int i = 0; i < 6; i++) {
        proverki = proverki + 1;
        if (arr[i] == x) {
            std::cout << "Намерих " << x << " във факултетния номер!" << std::endl;
        }
    }
    
    std::cout << "Общо извършени проверки: ";
    std::cout << proverki;

    return 0;
}