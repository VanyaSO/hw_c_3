#include <iostream>
using namespace std;

// Користувач вводить два цілих числа.
// Необхідно вивести всі цілі числа, на які обидва введених числа діляться без залишку.

int main() {
    int number1, number2, max;

    cout << "Enter number 1: " << endl;
    cin >> number1;
    cout << "Enter number 2: " << endl;
    cin >> number2;

    max = number1 > number2 ? number1 : number2;

    for (int i = 0; i <= max; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}