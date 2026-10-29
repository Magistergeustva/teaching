#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;

    int cnt = 0;
    if (x<0) x= -x; 

    do {

        cnt++;
        x = x/10;
    } while (0>x);

     cout << cnt << endl;
    return 0;
}
