#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char *name;
    int born;
    bool male;
public:
    Student() {
        name = new char[1024]{0};
        born = 0;
        male = false;
        cout << "Constructor: Person()" << endl;
    }

    Student(const char *initName, int initBorn, bool isMale) {
        name = new char[1024];
        setName(initName);
        born = initBorn;
        male = isMale;
        cout << "Constructor: Person(const char, int , bool)" << endl;
    }

    ~Student() {
        cout << "To destroy object: " << name << endl;
        delete[] name;
    }

    void setName(const char *s) {
        strncpy(name, s, 1024);
    }

    void setBorn(int b) {
        born = b;
    }

    // the declarations, the definitions are out of the class
    void setGender(bool isMale);

    void printInfo();
};

void Student::setGender(bool isMale) {
    male = isMale;
}

void Student::printInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Born in " << born << std::endl;
    std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
}

int main() {
    {
        Student yu;
        yu.printInfo();

        yu.setName("Yu");
        yu.setBorn(2000);
        yu.setGender(true);
        yu.printInfo();
        // 作用域结束时此处会自动销毁
    }
    Student xue = Student("XueQikun", 1962, true);
    xue.printInfo();

    Student *zhou = new Student("Zhou", 1991, false);
    zhou->printInfo();
    delete zhou;
    // 此处若注释掉，zhou 并不会自动销毁，但实际上因为此处程序结束了，内存被OS回收了

    return 0;
}