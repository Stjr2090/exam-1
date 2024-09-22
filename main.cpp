#include <iostream>

bool is_leap_year(unsigned int Y) {

  if (Y % 100 == 0) {
    return Y % 400 == 0;
  } else {
    return Y % 4 == 0;
  }
}

int main() {
  unsigned int year;
  std::cout << "Enter a year: ";
  std::cin >> year;

  if (is_leap_year(year)) {
    std::cout << year << " is a leap year." << std::endl;
  } else {
    std::cout << year << " is not a leap year." << std::endl;
  }
  return 0;
}
