//
// Created by 任振铭 on 2022/7/17.
//

#include <string.h>
#include <iostream>

using namespace std;

typedef struct {
    char *name;
    int age;
} Manager;


void doHomework(const Manager &manager) {
    //想要修改是不可以的，常量引用保护数据
//    manager->name = "";
//    strcpy(manager->name,"rzm");

    // 只读的了，可以安心插入数据库了
    cout << manager.name << "," << manager.age << endl;
}

int main04() {
    // 用户提交的Student数据
    Manager student = {"张无忌", 30};
    doHomework(student);

    return 0;
}