//
// Created by 任振铭 on 2022/7/17.
//


#include <iostream>

using namespace std;

class Person {
private:
    int age;
    char *name;

public:
    Person() {}

    Person(int age, char *name) : age(age), name(name) {
        cout << "Person 构造函数" << endl;
    }

    void print() {
        cout << "Person print函数" << endl;
    }
};

// 1.默认是 隐式代码： : private Person
// 2.私有继承：在子类里面是可以访问父类的成员，但是在类的外面不行
// 3.必须公开继承，才可以访问父类的成员
class Teacher : public Person {

private:
    char *course;

public:
    Teacher(char *name, int age, char *course) : Person(age, name), course(course) {
        cout << "Teacher 构造函数" << endl;
    }

    void test() {
        cout << "Teacher教" << course << "课" << endl;
    }
};

int main22(){
    Teacher teacher = Teacher("李香兰",43,"英语");
    teacher.test();
    teacher.print();
    return 0;
}