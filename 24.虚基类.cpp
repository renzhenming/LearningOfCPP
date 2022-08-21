//
// Created by 任振铭 on 2022/7/17.
//
#include "iostream"

using namespace std;
class Object{
public:
    int number;
    void show() {
        cout << "Object show run..." << endl;
    }
};

class Base1:virtual public Object{

};

class Base2:virtual public Object{

};

class Common: public Base1, public Base2{

};

int main24(){
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

    return 0;
}