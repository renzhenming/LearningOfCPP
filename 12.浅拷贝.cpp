//
// Created by 任振铭 on 2022/7/17.
//




#include<iostream>
#include<string.h>

using namespace std;

class Worker {
public:

    int age;
    char *name;

    Worker(char *name, int age) {
        this->name = (char *) malloc(sizeof(char *) * 10);
        strcpy(this->name, name);
        cout << "二个参数构造函数 this:" << (long) this->name << endl;
        this->age = age;
    }

    ~Worker() {
        cout << "析构函数执行 &this->name:" << (long) this->name << endl;
        free(this->name);
        this->name = NULL;
    }

    Worker(const Worker &worker) {
        cout << "拷贝构造函数 &worker:" << (long) &worker << " this:" << (long) this << endl;
        // 浅拷贝
        this->name = worker.name;
        this->age = worker.age;
        cout << "拷贝构造函数2 this->name:" << ((long) this->name) << "  worker.name:" << (long) worker.name << endl;

    }
};

void showWorker(Worker worker) {
    cout << "showWorker：" << (long) &worker << "  " << worker.name << "," << worker.age << endl;
}

int main12() {

    //会导致name被释放两次，所以报错
    Worker worker("王武", 13);
    //执行拷贝构造函数，会把原来name的地址给到新对象，两个引用指向了一块内存，释放了两次，导致出错。
    showWorker(worker);
    return 0;
}