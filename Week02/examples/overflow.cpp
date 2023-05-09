#include <iostream>
using namespace std;

int main()
{
    int a = 56789; // 0xDDD5, 16 bits
    int b = 56789;
    int c = a * b; // must least 32 bits 0x C0 39 73 39
                   // the sign bit is 1! equal 负数
    cout << "c = " << c << endl;

    unsigned int c1 = a * b; //danger operation
    cout << "c1 = " << c1 << endl;
    return 0;
}
