#include <iostream>

class ClassWithFile
{
    int *ptr;

public:
    ClassWithFile(): ptr{new int(42)}
    {
        std::cout << "Constructed \n";
        std::cout << "Address: " << ptr << '\n';
        std::cout << "Value: " << *ptr << "\n\n";
    }

    ~ClassWithFile()
    {
        std::cout << "\nBefore Destruct\n";
        std::cout << "Address: " << ptr << '\n';
        std::cout << "Value: " << *ptr << '\n';
        delete ptr;
        std::cout << "\nDestructed\n";
        std::cout << "Address: " << ptr << '\n';
        std::cout << "Value: " << *ptr << '\n';
    }

    int get()
    {
        return *ptr;
    }
};

int main()
{
    ClassWithFile simpleton;
    std::cout << "Simple class has value: " << simpleton.get() << '\n';
}