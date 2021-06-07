#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file ;
    file.open("test.txt",ios_base::out);

    if(file.is_open())
        cout << "file open success";
    else
        cout << "file open error";

    string str = "hello fstream!";
    file.write(str.data(),str.length());
    file.close();
    return 0;
}
