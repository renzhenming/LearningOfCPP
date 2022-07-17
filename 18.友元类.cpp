//
// Created by 任振铭 on 2022/7/17.
//
#include "iostream"

class XiaoWang {
private:
    int age;
    char *name;
    char *address;

    //设置XiaoHong为友元类之后就可以让XiaoHong访问XiaoWang的私有成员了
    friend class XiaoHong;
};

class XiaoHong {
private:
    int age;
    XiaoWang xiaoWang;

public:
    void updateAddress(char *address) {
        xiaoWang.address = address;
        std::cout << address << std::endl;
    }
};

int main18() {

    XiaoHong xiaoHong = XiaoHong();
    xiaoHong.updateAddress("北京朝阳区");

    return 0;
}