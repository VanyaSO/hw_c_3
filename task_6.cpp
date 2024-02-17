#include <iostream>
using namespace std;

// Користувач вводить ціле число.
// Необхідно вивести всі цілі числа, на які задане число ділиться без залишку.

int main() {
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    for (int i = 0; i <= number; i++) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}