#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T> void printVector(vector<T> vec) 
{
    for(auto item : vec) {
        cout << item << ", ";
    }
    cout << '\n';
}

int main()
{
    vector<int> v {1, 2, 3, 2, 5, 2, 6, 2, 4, 8};
    cout << "Initial Vector: " << '\n';
    printVector(v);

    // remove all the 2s
    const auto new_end(remove(begin(v), end(v), 2));
    v.erase(new_end, end(v));

    std::cout << "Vector without 2s: " << '\n';
    printVector(v);

    // remove odd
    vector<int> v0 {1, 2, 3, 2, 5, 2, 6, 2, 4, 8};
    const auto isOdd ([](int i) { return i % 2 != 0; });
    v0.erase(remove_if(begin(v0), end(v0), isOdd), end(v0));
    v0.shrink_to_fit();
    std::cout << "Vector without odds: " << '\n';
    printVector(v0);

    // remove odd
    vector<int> v1 {1, 2, 3, 2, 5, 2, 6, 2, 4, 8};
    const auto greaterThan20 ([](int i) { return i > 20; });
    v0.erase(remove_if(begin(v1), end(v1), greaterThan20), end(v1));
    v0.shrink_to_fit();
    std::cout << "Vector less than 21: " << '\n';
    printVector(v1);
}


