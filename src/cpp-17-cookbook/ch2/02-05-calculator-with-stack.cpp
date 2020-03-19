#include <iostream>
#include <stack>
#include <iterator>
#include <map>
#include <sstream>
#include <cassert>
#include <vector>
#include <stdexcept>
#include <cmath>

using namespace std;
    
template <typename ITER>
double evaluate_rpn(ITER iter, ITER end)
{
    map<string, double (*)(double, double)> ops {
        {"+", [](double a, double b) { return a + b; }},
        {"-", [](double a, double b) { return a - b; }},
        {"/", [](double a, double b) { return a / b; }},
        {"*", [](double a, double b) { return a * b; }},
        {"^", [](double a, double b) { return pow(a, b); }},
        {"%", [](double a, double b) { return fmod(a, b); }}
    };

    stack<double> val_stack;

    auto pop_stack ([&]() {
        auto r (val_stack.top());
        val_stack.pop();
        return r;
    });

    for(; iter != end; ++iter) {
        stringstream ss {*iter};

        if (double val; ss >> val) {
            val_stack.push(val);
        }
        else {
            const auto right_operand {pop_stack()};
            const auto left_operand {pop_stack()};

            try {
                const auto & op (ops.at(*iter));
                const double result {op (left_operand, right_operand)};
                val_stack.push(result);
            }
            catch (const out_of_range &) {
                throw invalid_argument(*iter);
            }
        }

    }
    
    return val_stack.top();
}

int main()
{
    try {
        cout << evaluate_rpn(istream_iterator<string>{cin}, {}) << '\n';
    }
    catch (const invalid_argument &e) {
        cout << "Invalid operator: " << e.what() << '\n';
    }
}