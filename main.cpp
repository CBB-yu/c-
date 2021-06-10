#include <iostream>
#include <string>
#include <fstream>
#include "kitty.h"

using namespace std;

int main()
{

    int a = 10;
    int &b = a;

    int *c = &b;

    cout << c << "  "<< &a <<"  "<< &b<<endl;
    return 0;
}
