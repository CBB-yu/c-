#include <iostream>
#include <string>
#include <fstream>
#include "kitty.h"

using namespace std;

class A
{
public:
    int a;
    void f() const;
};

//函数内部不会修改任何数据
void A::f() const
{
    //a = 21;         //read-only
    cout << a << endl;
}
int main()
{
    A a;
    a.f();

    return 0;
}
