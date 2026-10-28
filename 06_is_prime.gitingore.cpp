// Задача: Проверка простого числа
// Практика code review (2 курс)
// На что смотреть: глубокая вложенность; флаг flag; неочевидная логика
// Файл: 06_is_prime.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1)
        for (int i = 2; i*i <=n; i++){
            if (n % i == 0){
                cout << "not" << endl;
            } else {
                cout << "prime" << endl;
            }
            return 0;            
    }
}