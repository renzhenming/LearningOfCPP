//
// Created by 任振铭 on 2022/8/21.
//


/**
 *
 * 函数模板的写法如下：
 * template <class 类型参数1, class类型参数2, ...>
    返回值类型  模板名(形参表)
    {
        函数体
    }

    其中的 class 关键字也可以用 typename 关键字替换，例如：
    template <typename 类型参数1, typename 类型参数2, ...>
 *
 * @return
 */

#include <iostream>

using namespace std;

template<class R>
void Swap(R &a, R &b) {
    cout << "交换前" << "a = " << a << "b = " << b << endl;
    R temp = a;
    a = b;
    b = temp;
    cout << "交换后" << "a = " << a << "b = " << b << endl;
}

template<typename R>
void Swap2(R &a, R &b) {
    cout << "交换前" << "a = " << a << "b = " << b << endl;
    R temp = a;
    a = b;
    b = temp;
    cout << "交换后" << "a = " << a << "b = " << b << endl;
}

int main() {
    int n = 1, m = 2;
    Swap(n, m);  //编译器自动生成 void Swap (int &, int &)函数
    double f = 1.2, g = 2.3;
    Swap2(f, g);  //编译器自动生成 void Swap (double &, double &)函数
    return 0;
}


