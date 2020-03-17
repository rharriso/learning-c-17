#include<initializer_list>
#include<iostream>
#include<numeric>
#include<vector>
#include<string>

int main () {
  const auto messages = {
    std::string("Hello"),
    std::string("There"),
    std::string("Nice"),
    std::string("To"),
    std::string("Meet"),
    std::string("You")
  };

  const auto comma_fold = [](std::string a, std::string b) {
    return std::move(a) + ", " + std::move(b);
  };

  const auto joined = "[" +
    std::accumulate(
      messages.begin(),
      messages.end(),
      std::string(),
      comma_fold
    ) +
  "]";
  std::cout << joined << '\n';

  std::vector<std::string> message_vec{messages};
  const auto joined_vec = "[" +
    std::accumulate(
      std::next(messages.begin()),
      messages.end(),
      message_vec[0],
      comma_fold
    ) +
  "]";
  std::cout << joined_vec << '\n';

  return 0;
}