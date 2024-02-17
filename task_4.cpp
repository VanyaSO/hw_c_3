#include <iostream>
using namespace std;

// Користувач вводить довільне ціле число А.
// Необхідно вивести всі цілі числа В, для яких  А ділитися без залишку на В*В і не ділитися без залишку на В*В*В.
int main() {
    int a;
    cout << "Enter number: " << endl;
    cin >> a;

    if (a > 0) {
        for (int b = 0; b <= a; b++) {
            if (a % (b*b) == 0 && a % (b*b*b) != 0) {
                cout << b << endl;
            }
        }
    }

    return 0;

}