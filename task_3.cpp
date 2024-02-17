#include <iostream>
using namespace std;

//Користувач вводить будь-яке ціле число. Необхідно з цього цілого числа видалити всі цифри 3 і 6 та вивести назад на екран

int main() {

    int user_number, new_number = 0, temp, factor = 1;

    cout << "Enter number: " << endl;
    cin >> user_number;

    while (user_number > 0) {
        // get last numb
        temp = user_number % 10;
        // delete last number
        user_number /= 10;

        // check number for exceptions
        if (temp == 3 || temp == 6) { continue; }

        // create new number
        new_number = temp * factor + new_number;
        factor *= 10;
    }

    cout << new_number;

    return 0;

}