// Задача: Среднее арифметическое массива
// Практика code review (2 курс)
// На что смотреть: фиксированный размер 5 без константы; int-сумма и деление
// Файл: 11_array_avg.cpp

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int a[SIZE];
    int s = 0;

    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
        s = s + a[i];
    }

    cout << s / double(SIZE) << endl;
    
    return 0;
}
