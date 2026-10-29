#include <iostream>
using namespace std;

int main() {
    float t_farenheit;

    cout << "write temp in F:";
    cin >> t_farenheit;

    double t_celsius = (t_farenheit - 32) / 1.8;
    cout << "temp in C:"<< t_celsius<< endl;

    return 0;
}
