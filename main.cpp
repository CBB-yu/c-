#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    cin >> s;

    s.append(6,'&');

    cout << s.length() << endl;
    cout << s <<endl;
    return 0;
}
