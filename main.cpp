#include <iostream>
#include <string>

using namespace std;

//condition: parameter num and type different
//wrong:     different return value
void show(int num)
{
    cout << "int " << num << endl;
}
void show(string str)
{
    cout << "str " << str << endl;
}
int main()
{

    show(5);

    string str = "*********";
    show(str);
    return 0;
}
