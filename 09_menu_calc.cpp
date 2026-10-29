#include <iostream>
using namespace std;

int main() {

    int operation;
    double num1, num2;
    cin >> operation >> num1 >> num2;
    switch (operation) {
     case 1:
        cout <<num1 + num2 << endl;
        break;
     case 2:
        cout <<num1 - num2 << endl;
        break;
     case 3:
        cout <<num1 * num2 << endl;
        break;
     case 4:
        if (num2 != 0) {
        cout << num1 / num2 << endl;

        } else { 
        cout << "cancel" << endl;
        }
        break;
        default:
     cout << "error" << endl;
        break;
        
    }

return 0;

}
    
