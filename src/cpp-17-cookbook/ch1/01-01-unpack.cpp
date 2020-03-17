#include <iostream>
#include <string>
#include <vector>

struct car {
  std::string make;
  std::string model;
  long year;
};

int main () {
  std::vector<car> cars {
    { "Honda", "Civic", 2020 },
    { "Jeep", "Wrangler", 1995 },
    { "Kia", "Spectra", 2002 },
  };

  for (const auto &[make, model, year] : cars) {
    std::cout << "Make: " << make;
    std::cout << ", Model: " << model;
    std::cout << ", Year: " << year;
    std::cout << '\n';
  }

  return 0;
}