//
// Created by 任振铭 on 2022/7/17.
//

#ifndef LEARNINGOFC___MANAGER_H
#define LEARNINGOFC___MANAGER_H

// Student.h 头文件  只写声明，不写实现

class Manager {

private:
    int age;
    char *name;

public:

    int getAge();

    void setAge(int age);

    char *getName();

    void setName(char *name);
};


#endif //LEARNINGOFC___MANAGER_H
