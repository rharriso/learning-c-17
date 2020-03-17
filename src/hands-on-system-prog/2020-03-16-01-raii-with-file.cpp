#include <iostream>

class ClassWithFile
{
    FILE *m_file;

public:
    ClassWithFile(const char *filename): m_file{fopen(filename, "rb")}
    {
        if (m_file == 0) {
            throw std::runtime_error("unable to open file");
        }
        std::clog << "File opened: " << filename << '\n';
    }

    ~ClassWithFile()
    {
        fclose(m_file);
        std::clog << "File closed\n";
    }
};

int main()
{
    ClassWithFile file("./hello.txt");

    try {
        ClassWithFile file("./doesnt-exist.txt");
    } catch(const std::exception &e) {
        std::cerr << "execption: " << e.what() << '\n';
    }
}