#include <iostream>
#include <set>
#include <string>
#include <iterator>

int main()
{
    std::set<std::string> input_set;

    // create iterators from std::cin and some null end iterator
    std::istream_iterator<std::string> input_begin {std::cin};
    // the value of input_being.end() happends to equate to the default value for input_end
    std::istream_iterator<std::string> input_end;

    // when inserted into the set, the values are hashed by there lexical order
    std::copy(input_begin, input_end, std::inserter(input_set, input_set.end()));

    // print in alpha beta call order (capitalized first)
    for (const auto &word: input_set) {
        std::cout << word << ", ";
    }
    std::cout << '\n';
}