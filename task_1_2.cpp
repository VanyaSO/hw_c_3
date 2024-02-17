#include <iostream>
using namespace std;

// Підрахувати кількість цілих чисел у діапазоні від 100 до 999, у яких є дві однакові цифри.
// Підрахувати кількість цілих чисел у діапазоні від 100 до 999, у яких усі цифри різні.
int main() {
    const int MIN = 100, MAX = 999;
    int count_same = 0;
    int count_different = 0;


    for(int i = MIN; i <= MAX; i++) {
        // get the numbers separately
        int num1, num2, num3;
        num1 = i / 100;
        num2 = i % 100 / 10;
        num3 = i % 10;

        // check if two numbers are equal
        if (num1 == num2 || num1 == num3 || num2 == num3) {
            count_same += 1;
        } else if (num1 != num2 && num1 != num3 && num2 != num3) {
            count_different += 1;
        }
    }
    cout << "The same: " << count_same << endl;
    cout << "Different: " << count_different << endl;

    return 0;
}