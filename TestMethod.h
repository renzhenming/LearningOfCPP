//
// Created by 任振铭 on 2022/7/17.
//

#ifndef LEARNINGOFC___TESTMETHOD_H
#define LEARNINGOFC___TESTMETHOD_H

#include "iostream"

using namespace std;

// 静态函数，友元函数，普通函数，构造函数，析构函数，拷贝构造函数，有啥区别
class TestMethod {
private:
    char *name;
    int age;
public:
    void setName(char *);

    char *getName();

    void setAge(int);

    int getAge();

    //构造函数
    TestMethod();

    TestMethod(char *, int);

    //析构函数
    ~TestMethod();

    //拷贝构造函数
    TestMethod(const TestMethod &testMethod);

    //静态函数
    static void print();

    //友元函数
    friend void print(TestMethod *testMethod);
};


#endif //LEARNINGOFC___TESTMETHOD_H
