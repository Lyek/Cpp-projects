#include <iostream>
#include <iomanip>

int main(void)
{

  int temp_gasto_h, vel_media;
  float combustivel, km_litro;

  std::cout << "Insira o tempo gasto na viagem em horas: " << std::endl;
  std::cin >> temp_gasto_h;
  std::cout << std::endl;
  std::cin.ignore(80, '\n');

  std::cout << "Insira a velocidade media: " << std::endl;
  std::cin >> vel_media;
  std::cout << std::endl;
  std::cin.ignore(80, '\n');

  std::cout << "Insira a quantidade de km/l: " << std::endl;
  std::cin >> km_litro;
  std::cout << std::endl;
  std::cin.ignore(80, '\n');

  combustivel = (temp_gasto_h*vel_media)/km_litro;

  std::cout << std::setprecision (3);
  std::cout << std::setiosflags (std::ios::fixed);
  std::cout << std::setiosflags (std::ios::right);

  std::cout << "Foram gastos " << combustivel <<"L de combustivel" << std::endl;

  std::cout << "Tecle <Enter> para encerrar... " << std::endl;
  std::cout << std::endl;
  std::cin.get();
  return 0;

}
