//
// Created by 任振铭 on 2022/7/17.
//
#include "iostream"

using namespace std;

void method1(int age = 20, int sex = 1, char *from = "北京") {
    cout << "age = " << age << " sex = " << sex << " from = " << from << endl;
}

int main06() {
    method1();
    return 0;
}