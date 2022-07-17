//
// Created by 任振铭 on 2022/7/17.
//

//
// Created by 任振铭 on 2022/7/17.
//




#include<iostream>
#include<string.h>

using namespace std;

class Teacher {
public:

    int age;
    char *name;

    Teacher(char *name, int age) {
        this->name = (char *) malloc(sizeof(char *) * 10);
        strcpy(this->name, name);
        cout << "二个参数构造函数 this:" << (long) this->name << endl;
        this->age = age;
    }

    ~Teacher() {
        cout << "析构函数执行 &this->name:" << (long) this->name << endl;
        free(this->name);
        this->name = NULL;
    }

    Teacher(const Teacher &teacher) {
        cout << "拷贝构造函数 &teacher:" << (long) &teacher << " this:" << (long) this << endl;
        // 浅拷贝
//        this->name = teacher.name;

        //深拷贝
        this->name = (char *) malloc(sizeof(char *) * 10);
        strcpy(this->name, name);
        this->age = teacher.age;
        cout << "拷贝构造函数2 this->name:" << ((long) this->name) << "  teacher.name:" << (long) teacher.name << endl;

    }
};

void showTeacher(Teacher teacher) {
    cout << "showTeacher：" << (long) &teacher << "  " << teacher.name << "," << teacher.age << endl;
}

int main13() {

    //会导致name被释放两次，所以报错
    Teacher teacher("王武", 13);
    //执行拷贝构造函数，会把原来name的地址给到新对象，两个引用指向了一块内存，释放了两次，导致出错。


    //都不会报错了，因为每一个对象中name的内存都是独立的，不会导致重复释放
    showTeacher(teacher);
    showTeacher(teacher);
    showTeacher(teacher);
    showTeacher(teacher);
    showTeacher(teacher);
    return 0;
}