// Задача: Факториал числа
// Практика code review (2 курс)
// На что смотреть: нет проверки диапазона; имя f; смешение ++ и =
// Файл: 05_factorial.cpp

#include <iostream>
using namespace std;

int main(){
  int n;
  if (!(cin>>n)) {
    if (n < 0)
  return 1;
  }
  if (n> 12 ) {
    std::cout<<"Ошибка: Число слишком большое"<<endl;
    return 1;
  }
  int factorial=1;
  for (int i=1; i<=n; ++i){
    factorial=factorial*i;
  }
  cout<<factorial<<endl;
  return 0;
}
