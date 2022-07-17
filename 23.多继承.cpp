//
// Created by 任振铭 on 2022/7/17.
//

#include "iostream"

using namespace std;

class BaseFragment {
public:
    void onCreate() {
        cout << "BaseFragment onCreate" << endl;
    }

    void onStart() {
        cout << "BaseFragment onStart" << endl;
    }
};

class BaseFragment2 {
public:
    void onCreate() {
        cout << "BaseFragment2 onCreate" << endl;
    }

    void onStart() {
        cout << "BaseFragment2 onStart" << endl;
    }
};

class BaseFragment3 {
public:
    void onCreate() {
        cout << "BaseFragment3 onCreate" << endl;
    }

    void onStart() {
        cout << "BaseFragment3 onStart" << endl;
    }
};

class MainFragment : public BaseFragment, public BaseFragment2, public BaseFragment3 {
public:
    void onAttach() {
        cout << "MainFragment onAttach" << endl;
    }

    void onDetach() {
        cout << "MainFragment onDetach" << endl;
    }

    void onCreate() {
        cout << "MainFragment onCreate" << endl;
    }

    void onStart() {
        cout << "MainFragment onStart" << endl;
    }
};

// C++是有多继承的
// Java语言不允许多继承，多继承有歧义，如果Java语言多继承 就会导致代码不健壮，（二义性）
// Java多实现：做的非常棒，严格避免出现 二义性问题（歧义）

int main23() {
    MainFragment m1;
    MainFragment m2;
    MainFragment m3;

    // 不明确，二义性，歧义
//    m1.onCreate();
//    m1.onStart();

    // 解决方案一： 明确指定父类 ::
    m1.BaseFragment::onCreate();
    m2.BaseFragment2::onStart();

    // 解决方案二： 子类上 重写父类函数
    m1.onStart();
    m2.onCreate();

    return 0;
}