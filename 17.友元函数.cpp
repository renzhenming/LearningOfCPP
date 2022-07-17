//
// Created by 任振铭 on 2022/7/17.
//



#include <iostream>

class MyPen {
private:
    int price = 0;
public:
    MyPen(int price) {
        this->price = price;
    }

    int getPrice() {
        return this->price;
    }

    friend void updatePrice(MyPen *myPen, int price);

};

// 友元函数的实现，可以访问所以私有成员
void updatePrice(MyPen *myPen, int price) {
    // 默认情况下：不能修改 私有的age
    // 谁有这个权限：友元（拿到所有私有成员）
    myPen->price = price;
    std::cout << "price = " << myPen->price << std::endl;
}


int main17() {
    MyPen myPen(100);
    updatePrice(&myPen, 200);
    return 0;
}