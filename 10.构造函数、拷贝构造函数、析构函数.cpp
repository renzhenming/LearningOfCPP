//
// Created by 任振铭 on 2022/7/17.
//

#include <iostream>

using namespace std;


class Boss {
public:
    Boss() : Boss("默认姓名", 10) {
    }

    Boss(char *name) : Boss(name, 10) {
    }

    //调用时会先调用一个参数的构造函数
    Boss(char *name, int age) {
        this->name = (char *) malloc(sizeof(char));
        strcpy(this->name, name);
        this->age = age;
        cout << "Boss有参构造" << " name = " << name << " age = " << age << endl;
    }

    /**
     * 拷贝构造函数，它默认有，我们看不到，一旦我们写拷贝构造函数，会覆盖她
     * 对象1 = 对象2
     * 覆盖拷贝构造函数
     * @param boss
     */
    Boss(const Boss &boss) {
        cout << "Boss拷贝构造函数" << endl;
        this->name = (char *) malloc(sizeof(char));
        strcpy(this->name, name);
        this->age = boss.age;
    }

    /**
     * 析构函数，对象被销毁的时候会触发
     */
    ~Boss() {
        cout << "Boss析构函数" << endl;
        if (this->name != NULL) {
            free(this->name);
            this->name = NULL;
        }

    }


private:
    int age;
    char *name;

public:
    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    char *getName() {
        return this->name;
    }

    void setName(char *name) {
        this->name = name;
    }
};


/**
 * new/delete 是一套  会调用构造函数 与 析构函数   【C++标准规范】
 * malloc/free是一套  不调用构造函数 与 析构函数 【C的范畴，虽然不推荐，但是也是可以的】
 * @return
 */
int main10() {
    //并非显示调用delete才会执行析构函数，像这种对象被弹栈销毁的时候也会走析构函数
    Boss boss; //执行空参构造
    cout << "===========boss===========" << &boss << endl;

    Boss boss1("章三", 12);//执行有参构造
    cout << "===========boss1===========" << &boss1 << endl;

    Boss *b = new Boss();//执行空参构造
    delete b;
    cout << "==========b============" << &b << endl;

    Boss *b2 = new Boss("李雷", 34);//执行空参构造
    delete b2;
    cout << "==========b2============" << &b2 << endl;


    //执行拷贝构造函数，为什么会执行拷贝构造函数，因为这里是通过拷贝构造函数构建了boss3对象
    Boss boss2("包租婆", 54);
    Boss boss3 = boss2;
    cout << boss3.getName() << "-" << boss3.getAge() << endl;
    cout << "==========boss2============" << &boss2 << " boss3 = " << &boss3 << endl;

    //不会执行拷贝构造函数,TODO 下面的代码会导致重复free内存，原因未知
//    Boss boss4("酱爆", 34);
//    /**
//     * 为什么这里不会执行拷贝构造，因为这里是先调用无参构造创建了一个boss5对象，然后把boss4赋值给boss5了
//     */
//    Boss boss5;
//    boss5 = boss4;
//    cout << boss5.getName() << "-" << boss5.getAge() << " boss4 = " << &boss4 << " boss5 = " << &boss5 << endl;

    return 0;
}