#include <iostream>
#include <string>

using namespace std;

//error (int num1 = 321,int num2)

void f(int num1 = 321,int num2 = 123)
{
    cout << num1 << " " << num2 <<endl;
}
int main()
{

    f(10);
    return 0;
}
