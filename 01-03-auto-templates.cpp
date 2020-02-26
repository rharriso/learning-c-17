#include<iostream>
#include<utility>
#include<string>
#include<tuple>

int main () {
  std::pair person0("bill bostick", 17);
  const auto &[name, age] = person0;
  std::cout << "Name: " << name << ", Age: " << age << '\n';

  auto building0 = std::make_tuple(
    std::string("One World Trade"),
    std::string("New York City"),
    std::string("United States")
  );
  const auto &[building, city, country] = building0;
  std::cout << "building: " << building;
  std::cout << ", City: " << city;
  std::cout << ", Country: " << country;
  std::cout << '\n';

  return 0;
}
