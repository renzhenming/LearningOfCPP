//
// Created by 任振铭 on 2022/7/17.
//

#include "iostream"

using namespace std;


/**
 * C不支持函数重载，但是C++支持
 * @return
 */


void print(char *name, int age) {
    cout << "name :" << name << "age:" << age << endl;
}

void print(char *name, int age, int sex) {
    cout << "name :" << name << "age:" << age << "sex:" << sex << endl;
}


int main05() {
    print("haha", 12);
    print("李刚", 23, 1);
    return 0;
}