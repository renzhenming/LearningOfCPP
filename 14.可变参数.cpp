//
// Created by 任振铭 on 2022/7/17.
//

#include <iostream>
#include <stdarg.h>

void sum(int count, ...) {
    va_list ap; //va_list：一个字符指针，可以理解为指向当前参数的一个指针，取参必须通过这个指针进行。
    va_start(ap, count); //va_start：对ap进行初始化，让ap指向可变参数表里面的第一个参数。第一个参数是 ap 本身，第二个参数是在变参表前面紧挨着的一个变量，即“...”之前的那个参数；
    int i;
    for (i = 0; i < count; i++) {
        int result = va_arg(ap, int);//va_arg: 获取参数。它的第一个参数是ap，第二个参数是要获取的参数的指定类型。按照指定类型获取当前参数，返回这个指定类型的值，然后把 ap 的位置指向变参表中下一个变量的位置；
        std::cout << "result = " << result << std::endl;
    }
    va_end(ap);//va_end：释放指针，将输入的参数 ap 置为 NULL。通常va_start和va_end是成对出现。
}


int main14() {
    sum(4,1,2,3,4);
    return 0;
}