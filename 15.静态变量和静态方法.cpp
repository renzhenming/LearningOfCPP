//
// Created by 任振铭 on 2022/7/17.
//

#include "TestStatic.h"

/**
 * 静态的总结：
 * 1.可以直接通过类名::静态成员（字段/函数）
 * 2.静态的属性必须要初始化，然后再实现（规则）
 * 3.静态的函数只能取操作静态的属性和方法（Java）
 */
int main15() {

    TestStatic::update();

    TestStatic aStatic;

    aStatic.update2();
    return 0;
}