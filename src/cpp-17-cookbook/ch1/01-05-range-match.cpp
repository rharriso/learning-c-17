#include<iostream>
#include<vector>

template <typename R, typename ... Ts>
auto matches(const R& range, Ts ...ts)
{
  return (std::count(std::begin(range), std::end(range), ts) + ...);
}

int main () {
  auto v = std::vector<int>{1, 2, 3, 4, 5};

  std::cout << matches(v, 2, 4) << '\n';
  std::cout << matches(v, 200, 4) << '\n';
  std::cout << matches("abcdefg", 'x', 'y', 'z') << '\n';
  std::cout << matches("abcdefg", 'a', 'd', 'f') << '\n';
  return 0;
}