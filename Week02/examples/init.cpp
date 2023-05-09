#include <iostream>
using namespace std;
int main()
{
    int num1; //bad: uninitialized variable
    int num2; //bad: uninitialized variable
    // 在不同架构下的默认值是不一样的
    // 使用 g++ init.cpp && file a.out 查看即可
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
