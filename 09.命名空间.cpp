//
// Created by 任振铭 on 2022/7/17.
//
// 声明std，我们的main函数就可以直接使用里面的成员，不需要使用 std::
using namespace std;

#include "iostream"


//自定义命名空间
namespace REN {
    int age = 30;
    char *name = "good boy";

    void method1() {
        cout << "make lots of money" << endl;
    }
}


int main09() {

    cout << "我是用输出流输出的内容" << endl;

    cout << REN::name << "  " << REN::age << endl;

    using namespace REN;
    cout << name << " " << age << endl;

    method1();

    return 0;
}