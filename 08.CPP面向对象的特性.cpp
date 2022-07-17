//
// Created by 任振铭 on 2022/7/17.
//

#include "Manager.h"
#include <iostream>

using namespace std;

int main08() {
    // 栈区开辟空间的
    Manager manager;
    cout << "name = " << manager.getName() << " age = " << manager.getAge() << endl;

    manager.setAge(12);
    manager.setName("哈哈哈");
    cout << "name = " << manager.getName() << " age = " << manager.getAge() << endl;

    Manager *manager1 = new Manager();
    manager1->setName("我发的设计开发");
    manager1->setAge(122);

    cout << "name = " << manager1->getName() << " age = " << manager1->getAge() << endl;
    delete manager1;
    return 0;
}