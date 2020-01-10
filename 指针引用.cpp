#include <iostream>

using namespace std;
struct point {
    int x;
    int y;
};

void changenum1(point *&pnum) {
    pnum = new point;
    pnum->x = 4;
} 
void changenum2(point *pnum) {
    pnum = new point;
    pnum->x = 4;
}


void test1() {
    point *num = new point;
    num->x = 10;
    changenum1(num);
    std::cout << "指针引用" << num->x << endl;
}

void test2() {
    point *num = new point;
    num->x = 10;
    changenum2(num);
    std::cout << "指针" << num->x << endl;
}

int main() {
    cout << "开始执行程序" << endl;
    test1();
    test2();
    cout << "执行程序完毕" << endl;
    return 0;
}
