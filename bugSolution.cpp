#include <iostream>
#include <vector>

int main() {
  // Instead of std::vector<bool>, use a std::vector<char> or std::vector<int> to store booleans.
  std::vector<char> boolVector;
  boolVector.push_back(true);
  boolVector.push_back(false);

  // Access elements with careful bounds checking
  for (size_t i = 0; i < boolVector.size(); ++i) {
    std::cout << (boolVector[i] ? "true" : "false") << std::endl;
  }

  return 0;
}
