#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str  = "12131451112";

    int finded = -1;
    for( int i=0; i<(int)str.length(); i++)
    {
            while(1)
            {
                finded = str.find_last_of(str[i]);
                if(finded != -1 && finded != i)     //not found or not self
                {

                    str.erase(finded,1);
                }
                else
                {
                    break;
                }
            }

    }
    cout << str <<endl;
    return 0;
}
