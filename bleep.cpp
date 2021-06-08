#include <iostream>
#include <string>
#include "functions.hpp"

int main() {
  std::string word = "broccoli";
  std::string text = "I'd say pass the broccoli, but I hate broccoli! Even if I throw in random capital letters, please still bleep BroCColI!";

  bleep(word, text);

  std::cout << text << "\n";
}
