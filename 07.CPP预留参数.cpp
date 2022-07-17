//
// Created by 任振铭 on 2022/7/17.
//
#include "iostream"

using namespace std;

/**
 * 第一个版本登录只需要姓名和密码，后边考虑可能会添加一个年龄参数，但是还没确定，所以先预留下来
 * 因为调用的地方很多，如果不预留，下次会有大量代码被改动
 * @param name
 * @param password
 */
void login(char *name, char *password, int) {
    cout << "name = " << name << " password = " << password << endl;
}

//版本2可能就加上了这个参数
//void login(char *name, char *password, int age) {
//    cout << "name = " << name << " password = " << password << "age = " << age << endl;
//}

int main07(void) {
    // 前面一个月开发功能的时候
    login("renzhenming", "123", 1);
    return 0;

}