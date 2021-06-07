#include <iostream>
#include <string>

using namespace std;

void func(int &num)
{
    num = 66;
}
int main()
{

    int num = 99;

    int &num_1 = num;   //引用，在定义时赋值
    cout << num_1 << endl;

    func(num);      //num  change
    cout << num_1 << endl;
    return 0;
}
