//
// Created by 任振铭 on 2022/8/26.
//
using namespace std;

#include <iostream>
/**
 * 当类中有了纯虚函数，这个类也称为抽象类。
 * 抽象类特点:无法实例化对象，子类必须重写抽象类中的纯虚函数，否则也属于抽象类。
 */
class Base {
public:
    virtual void Examp() = 0;//纯虚函数
};

class Son : public Base {
public:
    void Examp() {
        cout << "重写了父类的纯虚函数" << endl;
    }
};

int main28() {
    Son p1;
    p1.Examp();
    return 0;
}
