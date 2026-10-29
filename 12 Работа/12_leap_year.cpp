// Задача: Високосный год
// Практика code review (2 курс)
// На что смотреть: сложное условие в одну строку; нет пояснения правила
// Файл: 12_leap_year.cpp

#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter the year: " << endl;
    cin >> y;
    bool IsLeapYear = (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
    if (IsLeapYear) {
        cout << "yes";
    } else {
        cout << "no";
    }
    cout << endl;
    return 0;
}
