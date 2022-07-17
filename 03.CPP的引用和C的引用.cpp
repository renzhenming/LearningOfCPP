//
// Created by 任振铭 on 2022/7/17.
//

#include <iostream>

using namespace std;

// C语言的处理方式，接收number1/number2的地址，取改地址的值，来完成的互换
void swapUsingC(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout << "swapUsingC " << "n1：" << *n1 << " , n2：" << *n2 << endl;
}

//C++建议的方式
void swapUsingCPP(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "swapUsingC " << "n1：" << n1 << " , n2：" << n2 << endl;
}

/**
 * 引用就是一个别名，地址是一样的
 * @return
 */
int main03() {

    int number1 = 10;
    int number2 = 20;

    cout << "main " << "n1：" << number1 << " , n2：" << number2 << endl;
    swapUsingC(&number1, &number2);

    int number11 = 100;
    int number22 = 200;

    cout << "main " << "n1：" << number11 << " , n2：" << number22 << endl;
    swapUsingCPP(number11, number22);

    return 0;
}
