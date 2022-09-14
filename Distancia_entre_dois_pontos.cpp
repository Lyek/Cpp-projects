#include <iostream>
#include <iomanip>
#include <cmath>


int main(void)
{
  float x1, y1, x2, y2;

  float distance;

  std::cin >> x1 >> y1;
  std::cin.ignore(80, '\n');

  std::cin >> x2 >> y2;
  std::cin.ignore(80, '\n');

  distance = sqrt( pow(x2-x1,2) + pow(y2-y1,2));

  std::cout << std::setprecision (4);
  std::cout << std::setiosflags (std::ios::right);
  std::cout << std::setiosflags (std::ios::fixed);

  std::cout << distance << std::endl << std::endl;

  std::cout << "Press <Enter> to exit... " << std::endl;
  std::cout << std::endl;
  std::cin.get();
  return 0;
}
