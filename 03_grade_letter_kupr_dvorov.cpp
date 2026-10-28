// Задача: Оценка по баллам
// Практика code review (2 курс)
// На что смотреть: лестница if без else if; магические пороги; копипаста сообщений
// Файл: 03_grade_letter.cpp

#include <iostream>
using namespace std;

int main() {
    const int TRESHHOLD_A = 90;
    const int TRESHHOLD_B = 80;
    const int TRESHHOLD_C = 70;
    const int TRESHHOLD_D = 60;
    int ball;
    if (std::cin>>ball){
        std::cout<<"Ошибка: Ожидается целое число \n";
        return 1;
    }
    char grade;
    if (ball >= TRESHHOLD_A) grade ='A';
    else if (ball >= TRESHHOLD_B) grade = 'B';
    else if (ball >= TRESHHOLD_C) grade = 'C';
    else if (ball >= TRESHHOLD_D) grade = 'D';
    else grade = 'F';
    std::cout<<grade<<'\n';
    return 0;
}
