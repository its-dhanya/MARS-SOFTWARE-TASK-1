#include <iostream>
#include <functional>

int main() {
  auto customDataType = [](int x, int y) {
  return x + y;
};
int result = customDataType(10, 20);
 std::cout << "Result: " << result << std::endl;
 return 0;
}
