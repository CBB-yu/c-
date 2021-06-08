#include <iostream>
#include <string>
#include <fstream>
#include "kitty.h"

using namespace std;

int main()
{
    kitty * firstCat = new kitty('m');

    firstCat->Color = kitty::black;

    delete firstCat;


    return 0;
}
