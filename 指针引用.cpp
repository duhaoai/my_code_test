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
    std::cout << "ָ������" << num->x << endl;
}

void test2() {
    point *num = new point;
    num->x = 10;
    changenum2(num);
    std::cout << "ָ��" << num->x << endl;
}

int main() {
    cout << "��ʼִ�г���" << endl;
    test1();
    test2();
    cout << "ִ�г������" << endl;
    return 0;
}
