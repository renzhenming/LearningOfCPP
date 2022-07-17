//
// Created by 任振铭 on 2022/7/17.
//

class Point {
private:
    int x;
    int y;

public:

    // 系统C++源码，大量使用此方式 :x(x), y(y)
    Point(int x, int y) : x(x), y(y) {
        this->y = y;
        this->x = x;
    }

    // 系统是这样写的  常量引用：不允许修改，只读模式
    // const 关键字的解释
    // & 性能的提高，如果没有&  运行+ 构建新的副本，会浪费性能
    // 如果增加了& 引用是给这块内存空间取一个别名而已
    Point operator+(const Point &p) {
        return Point(this->x + p.x, this->y + p.y);
    }

    Point operator-(const Point &p) {
        return Point(this->x - p.x, this->y - p.y);
    }

    //// 对象++
    void operator++(int) {
        this->x = this->x + 1;
        this->y = this->y + 1;
    }

    ////++对象
    void operator++() {
        this->x = this->x + 1;
        this->y = this->y + 1;
    }

    //// 对象--
    void operator--(int) {
        this->x = this->x - 1;
        this->y = this->y - 1;
    }

    //// --对象
    void operator--() {
        this->x = this->x - 1;
        this->y = this->y - 1;
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

#include "iostream"

using namespace std;

int main21() {
    Point point(100, 200);
    Point p2(200, 300);
    Point p = point + p2;
    cout << "x = " << p.getX() << " y = " << p.getY() << endl;

    point++;
    cout << "x = " << point.getX() << " y = " << point.getY() << endl;

    --p2;
    cout << "x = " << p2.getX() << " y = " << p2.getY() << endl;
    return 0;
}

















