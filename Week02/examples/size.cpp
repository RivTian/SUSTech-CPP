#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    short s = 0;
    cout << "sizeof(char)=" << sizeof(char) << endl;
    cout << "sizeof(int)=" << sizeof(int) << endl;
    cout << "sizeof(i)=" << sizeof(i) << endl;
    cout << "sizeof(short)=" << sizeof(s) << endl;
    cout << "sizeof(long)=" << sizeof(long) << endl;
    cout << "sizeof(long double)=" << sizeof(long double) << endl;
    cout << "sizeof(size_t)=" << sizeof(size_t) << endl;
    return 0;
}