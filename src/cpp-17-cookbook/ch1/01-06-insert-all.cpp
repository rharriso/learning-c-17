#include <set>
#include <iostream>

template <typename S, typename ... Ts>
bool insert_all(S &set, Ts ... ts) {
  // Note: Stops inserting on first failure
  return (set.insert(ts).second && ...);
}

int main() {
  std::set<int> set{1, 2, 3};

  std::cout << insert_all(set, 4, 5, 6) << '\n';
  // set will contain 8
  std::cout << insert_all(set, 7, 8, 2) << '\n';
  // set will not contain 10
  std::cout << insert_all(set, 9, 2, 10) << '\n';
}