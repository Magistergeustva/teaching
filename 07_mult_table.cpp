// Задача: Таблица умножения
// Практика code review (2 курс)
// На что смотреть: магическое 10; вложенные циклы без пояснений; вывод в одну кучу
// Файл: 07_mult_table.cpp

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << (i * j) << "\t";
        }
    }
    return 0;
}
