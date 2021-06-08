#include "kitty.h"
#include <iostream>

using std::cout;
using std::endl;

kitty::kitty(char genter)
{
    this->genter = genter;
    cout << "A cat born!" << endl;
}

kitty::~kitty()
{

    cout << "A cat delete" <<endl;
}

void kitty::eat()
{
    cout << "cat eat some food" << endl;
}

