#include <iostream>
#include <string>
#include <fstream>
#include "kitty.h"

using namespace std;

class A
{
public:
    virtual void vFunc();   //普通虚函数，默认的方法
    virtual void vFunc1()=0;  //纯虚函数，派生类必须复写
};


int main()
{


    return 0;
}
