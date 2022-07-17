//
// Created by 任振铭 on 2022/7/17.
//

class Rect {
private:
    int x;
    int y;

public:

    // 系统C++源码，大量使用此方式 :x(x), y(y)
    Rect(int x, int y) : x(x), y(y) {
        this->y = y;
        this->x = x;
    }

    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }
};

// 在真实开发过程中，基本上都是写在类的里面的，为什么？ 娓娓道来  答：外部是不能获取内部的私有成员的
// 把+重载 运算符重载
Rect operator+(Rect &r, Rect &r2) {
    return Rect(r.getX() + r2.getX(), r.getY() + r2.getY());
}

#include <iostream>

using namespace std;

int main20() {
    Rect rect(10, 20);
    Rect rect1(30, 40);

    Rect n = rect + rect1;
    cout << n.getX() << " " << n.getY() << endl;

    return 0;
}














