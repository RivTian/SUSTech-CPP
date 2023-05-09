#include <iostream>
using namespace std;

int main()
{
    char c1 = 'C';
    char c2 = 80; // 'P'
    char c3 = 0x50;
    char16_t c4 = u'于'; // C++11
    char32_t c5 = U'于'; // C++11
    cout << c1 << ":" << c2 << ":"<< c3 << endl;
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    
    return 0;
}

