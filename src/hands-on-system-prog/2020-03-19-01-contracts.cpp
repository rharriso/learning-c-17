#define GSL_THROW_ON_CONTRACT_VIOLATION
#include <gsl/gsl>
#include <iostream>

int test(int i)
{
    Expects(i > 0 && i < 41);
    i++;

    Ensures(i < 42);
    return i;
}

int main(void)
{
    test(0);

    try {
        test(42);
    }
    catch(const gsl::fail_fast &e) {
        std::cout << "exception: " << e.what() << '\n';
    }
}