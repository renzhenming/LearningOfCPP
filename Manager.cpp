//
// Created by 任振铭 on 2022/7/17.
//

#include "Manager.h"

int Manager::getAge() {
    return this->age;
}

void Manager::setAge(int age) {
    this->age = age;
}

char *Manager::getName() {
    return this->name;
}

void Manager::setName(char *name) {
    this->name = name;
}