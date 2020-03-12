#include <iostream>

template <typename Min, typename Max, typename ... Ts>
bool within(Min min, Max max, Ts ... ts) {
  return ((min <= ts && ts <= max) && ...);
}

int main() {
  std::cout << within(0.1, 4, 1, 2, 4) << '\n';
  std::cout << within(0, 4.5, 1, 2, 4, 5) << '\n';
  std::cout << within(-1.2f, 1, 0.1, -0.2) << '\n';
}