#include <iostream>

using namespace std;

// Class Template
template<typename T, size_t rows, size_t cols>
class Mat {
    T data[rows][cols];
public:
    Mat() {}

    //// the default copy constructor will copy each element of a static array member
    //// so we do not 'delete' the copy constructor
    //// the same with the assignment operator
    // Mat(const Mat&) = delete;
    // Mat& operator=(const Mat&) = delete;
    T getElement(size_t r, size_t c);

    bool setElement(size_t r, size_t c, T value);
};

template<typename T, size_t rows, size_t cols>
T Mat<T, rows, cols>::getElement(size_t r, size_t c) {
    if (r >= rows || c >= cols) {
        cerr << "getElement(): indices are out of range" << endl;
        return 0;
    }
    return data[r][c];
}

template<typename T, size_t rows, size_t cols>
bool Mat<T, rows, cols>::setElement(size_t r, size_t c, T value) {
    if (r >= rows || c >= cols) {
        cerr << "setElement(): Indices are out of range" << endl;
        return false;
    }

    data[r][c] = value;
    return true;
}

template
class Mat<int, 2, 2>; // Explicitly instantiate template Mat<int, 2, 2>
typedef Mat<int, 2, 2> Mat22i;

// 隐式实例化
//template Mat<float, 3, 1> will be instantiate implicitly

int main() {
    Mat22i mat;

    mat.setElement(2, 3, 256);
    cout << mat.getElement(2, 3) << endl;

    mat.setElement(1, 1, 256);
    cout << mat.getElement(1, 1) << endl;

    // 隐式
    Mat<float, 3, 1> vec;
    vec.setElement(2, 0, 3.14159f);
    cout << vec.getElement(2, 0) << endl;

    Mat<float, 3, 1> vec2(vec);
    cout << vec2.getElement(2, 0) << endl;
    // 似乎合理的解释
    // vec2调用自己的默认复制构造，复制了vec的成员data的指针，修改vec的data值，vec2也会同步变化


    // 编译发生错误，没有重载不同类型的赋值
    //vec2 = mat; //error

    return 0;
}