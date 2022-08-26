//
// Created by 任振铭 on 2022/8/26.
//

using namespace std;

#include <iostream>


/**
 * 供子类重写的函数，这个函数在父类中也有方法体，子类可以选择性的重写，也可以不重写
 * 类似java中的方法重写
 */
class A {
public:
    virtual void foo() {
        cout << "A::foo() is called" << endl;
    }
};

class B : public A {
public:
    void foo() {
        cout << "B::foo() is called" << endl;
    }
};

int main27() {
    A *a = new B();
    a->foo();   // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!
    return 0;
}