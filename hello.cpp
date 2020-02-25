#include<memory>
#include<iostream>
#include<vector>
#include<string>
#include<numeric>

void printIntPointer(const int &int_ptr) {
  std::cout << int_ptr << '\n';
  std::cout << &int_ptr << '\n';
}

int main () {
  auto hey = std::make_shared<int>(10);
  printIntPointer(*hey);
  
  std::vector<std::string> messages {"Hello", "There", "Nice", "To", "Meet", "You"};

  auto comma_fold = [](std::string a, std::string b) {
    return std::move(a) + ", " + std::move(b);
  };

  auto joined = "[" +
    std::accumulate(
      std::next(messages.begin()),
      messages.end(),
      messages[0],
      comma_fold
    ) +
  "]";
  std::cout << joined << '\n';

  return 0;
}
