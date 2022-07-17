//
// Created by 任振铭 on 2022/7/17.
//
// 静态函数，友元函数，普通函数，构造函数，析构函数，拷贝构造函数，有啥区别
// 真实开发过程中的规范来，引出 友元类
// 头文件<---->实现文件

#include "TestMethod.h"

int main19() {
    TestMethod *t = new TestMethod();
    t->setAge(12);
    t->setName("哈减肥的");

    cout << "age = " << t->getAge() << " name = " << t->getName() << endl;
    return 0;
}