//
// Created by 任振铭 on 2022/7/17.
//

#include <iostream>

using namespace std;

int main02() {
    // C语言的常量，其实是个 假常量（伪命题）
    const int a = 100;
//    a = 200; 无法修改，但是可以通过指针修改,以下代码在C文件中是可以实现的
//    int * p = &a;
//    *p = 200;

    // C++语言的常量，是真常量，同样的代码，在c++文件中会编译报错
    const int b = 100;
//    int * p = &b;
//    *p = 200;


    /**
     *  依赖于这两个
     *  #include <iostream>
     *  using namespace std;
     */
    cout << b << endl;
    return 0;
}