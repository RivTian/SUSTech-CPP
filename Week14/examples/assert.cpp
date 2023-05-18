#include <iostream>
//#define NDEBUG
// 控制 assert 的使用，
// 或者在编译的时候加参数 g++ assert.cpp -DNDEBUG

#include <cassert>
int main(int argc, char ** argv)
{
    assert( argc == 2);
    std::cout << "This is an assert example." << std::endl;
    return 0;
}
