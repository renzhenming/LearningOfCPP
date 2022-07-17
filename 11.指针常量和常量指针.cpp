//
// Created by 任振铭 on 2022/7/17.
//

int main11(){

    int number = 9;
    int number2 = 8;

    // 大道至简 一分钟搞定

    // 常量指针-----指向“常量”的指针（const int *p， int const *p），指向的值不能变，地址可以变，也就是可以重新指向其他地址
    const int * numberP1 = &number;
    // *numberP1 = 100; // 报错，
    // numberP1 = &number2; // OK，

    //  指针常量-----指针类型的常量（int *const p） 这个常量是个指针，指针地址不能变，但是这个地址指向的值可以变
    int* const numberP2 = &number;
    *numberP2 = 100; // OK，
    // numberP2 = &number2; // 报错，

    // 常量指针常量  二者的结合体，指向的值和指针指向都不能修改
    const int * const numberP3 = &number;
    // *numberP3 = 100; // 报错
    // numberP3 = &number2; // 报错，
    return 0;
}