#define GSL_THROW_ON_CONTRACT_VIOLATION
#include <gsl/gsl>
#include <iostream>

int main(void)
{
    int array[5] = {1,2,3,4,5};
    auto span = gsl::span(array); 

    for (const auto &elem : span) {
        std::clog << elem << '\n';
    }
    std::clog << '\n';

    for (auto i = 0; i < 5; i++) {
        std:: clog << span[i] << '\n';
    }
    std::clog << '\n';

    // Define property on line 1 allows this out of bounds acces to throw
    // This only works because the span is a gsl type that implements contracts
    try {
        std::clog << span[5] << '\n';
    }
    catch (const gsl::fail_fast &e) {
        std::cout << "Exception: " << e.what() << '\n';
    }
}
