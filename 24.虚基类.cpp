//
// Created by 任振铭 on 2022/7/17.
//
#include "iostream"

/**
 *
 * 如果一个派生类是从多个基类派生出来的，而这些基类又有一个共同的基类，
 * 则在这个派生类中访问这个共同的基类中的成员时，可能会产生二义性。
 *
 * 在下面的例子中Base1初始化会导致Object构造函数执行一次，Base2初始化也会导致构造函数
 * 执行一次，所以number被初始化了两次，我们希望a只被再第一次初始化以后就不再继续初始化了。
 *
 * 那么我们要使用虚基类。
 *
 * 不使用虚基类时：
 *  Object number = 0
 *  Base1 number = 10
 *  Object number = 0
 *  Base2 number = 100
 *  Common base1 number = 10base2 number = 100
 *
 * 使用虚基类后：
 * Object number = 0
 * Base1 number = 10
 * Base2 number = 110
 * Common base1 number = 110base2 number = 110
 */

using namespace std;

class Object {
public:
    int number = 0;

    Object() {
        cout << "Object number = " << number << endl;
    }

    void show() {
        cout << "Object show run..." << endl;
    }
};

class Base1 : public virtual Object {

public:
    Base1() {
        number = number + 10;
        cout << "Base1 number = " << number << endl;
    }
};

class Base2 : public virtual Object {
public:
    Base2() {
        number = number + 100;
        cout << "Base2 number = " << number << endl;
    }
};

class Common : public Base1, public Base2 {

public:
    Common() {
        cout << "Common base1 number = " << Base1::number << "base2 number = " << Base2::number << endl;
    }
};

int main24() {
    Object object;
    Base1 baseActivity1;
    Base2 baseActivity2;
    Common common;

    object.number = 100;
    baseActivity1.number = 200;
    baseActivity2.number = 300;
    common.number = 400;

    object.show();
    baseActivity1.show();
    baseActivity2.show();
    common.show();

    cout << object.number << endl;
    cout << baseActivity1.number << endl;
    cout << baseActivity2.number << endl;
    cout << common.number << endl;
    cout << "====================================" << endl;

    Common c;
    return 0;
}