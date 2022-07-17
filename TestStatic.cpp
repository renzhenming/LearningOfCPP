//
// Created by 任振铭 on 2022/7/17.
//

#include <iostream>
#include "TestStatic.h"

int TestStatic::id = 120;

void TestStatic::update() {
    id += 100;
    std::cout << "id = " << id << std::endl;
}

void TestStatic::update2() {
    id += 1000;
    std::cout << "id = " << id << std::endl;
}