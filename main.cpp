#include <iostream>

using namespace std;
using  std::cout;
namespace G
{

    int a = 10;
}
namespace G
{
    int b = 11;
}

int main()
{

    cout << "are u ok?" << endl;
    cout << G::a  << "adad" << endl;
    cout << G::b <<endl;
    return 0;
}
