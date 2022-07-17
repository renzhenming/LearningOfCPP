//
// Created by 任振铭 on 2022/7/17.
//



#include <iostream>

using namespace std;

class Successor{
public:
    char * name;
    int age = NULL; // C++中不像Java，Java有默认值， 如果你不给默认值，那么就是系统值 -64664

    // 原理：为什么可以修改age
    // 默认持有隐士的this【类型 * const this】指针常量
    // 类型 * const 指针常量：代表指针地址不能被修改，但是指针地址的值是可以修改的
    void method1(){
        // 地址不可以修改
        // this = 0x43563;

        // 地址对应的值能改
        this->age = age;
    }

    //加了const之后，this 等价于 const Student * const  常量指针常量（地址不能改，地址对应的值不能改）
    void method2() const{
        //通常用于只能读取的方法，防止被修改，是对数据的一种保护
    }
};

int main16(){

    return 1;
}