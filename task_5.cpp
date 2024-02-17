#include <iostream>
using namespace std;

// Користувач вводить ціле число А. Програма повинна визначити, що куб суми цифр цього числа дорівнює А*А.

int main() {
    const int DEGREE = 3;
    int a, sum = 0, temp;
    cout << "Enter number: " << endl;
    cin >> a;


    int copy_a = a;
    while (copy_a > 0) {
        temp = copy_a % 10;
        sum += temp;
        copy_a /= 10;
    }

    if ((a * a) == pow(sum, DEGREE)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}