//
// Created by 任振铭 on 2022/7/17.
//

#include "TestMethod.h"

// TODO  ======================  下面是 普普通通 常规操作 对象::

void TestMethod::setName(char *name) {
    this->name = name;
}

char *TestMethod::getName() {
    return this->name;
}

void TestMethod::setAge(int age) {
    this->age = age;
}

int TestMethod::getAge() {
    return this->age;
}

//构造函数
TestMethod::TestMethod() {
    cout << "构造函数" << endl;
}

TestMethod::TestMethod(char *, int) {
    cout << "有参构造函数" << endl;
}

//析构函数
TestMethod::~TestMethod() {
    cout << "析构函数" << endl;
}

//拷贝构造函数
TestMethod::TestMethod(const TestMethod &testMethod) {
    cout << "拷贝构造函数" << endl;
}

// TODO ===============================  静态 和 友元 注意点 自己理解

//'static' can only be specified inside the class definition
// 实现静态函数，【不需要增加 static关键字】 static只能在定义类时使用
void TestMethod::print() {
    cout << "静态函数" << endl;
}

//'friend' used outside of class
// 友元的实现
// 友元特殊：不需要关键字，也不需要 对象:: ,只需要保证 函数名（参数）
void print(TestMethod *testMethod) {
    cout << "友元函数" << endl;
}