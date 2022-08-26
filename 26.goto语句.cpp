//
// Created by 任振铭 on 2022/8/22.
//

using namespace std;

#include "iostream"

int main26() {
    int a = 10;
    GOTO:
    do {
        if (a == 30) {
            a++;
            goto GOTO;
        }
        cout << a << endl;
        a++;
    } while (a < 100);
    return 0;
}