#include<iostream>

template <typename ... Ts>
auto sum(Ts ...ts)
{
  return (ts + ...);
}

int main () {
  std::cout << sum(0, 0.5, 10L, 12U, -7.25f, 100UL) << '\n';
  std::cout << sum(std::string("Hello, "), std::string("World")) << '\n';
  return 0;
}