// Задача: Таблица умножения
// Практика code review (2 курс)
// На что смотреть: магическое 10; вложенные циклы без пояснений; вывод в одну кучу
// Файл: 07_mult_table.cpp

#include <iostream>
using namespace std;

int main() {
    int tableSize =10;
    for (int i = 1; i <= tableSize;  i++) {
        for (int j = 1; j <= tableSize; j++) {
            cout << (i * j) << "\t ";
        }
       
    }
    return 0;
}
