#include <iostream>
#include <string>

using namespace std;

int main()
{
    double f = 1111111.111;
    cout << f <<endl;

    cout.setf(ios_base::scientific,ios_base::floatfield);

    cout << f <<endl;

    string str = "abcDgF";

    for(unsigned int i =0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i] <='z')
        {

            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}
