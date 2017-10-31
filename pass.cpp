#include <iostream>
#include <fstream>
#include <string>
#include <random>

int main()
{
  int n;
  const std::string filename = "passwords.txt";
  std::fstream writing_file;
  writing_file.open(filename, std::ios::app);

  std::random_device rnd;
  std::mt19937 mer(rnd());
  std::uniform_int_distribution<> randc('A', 'z');
  while (std::cin >> n, n){
    while (n){
      char c = randc(mer);
      if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')){
        std::cout << c;
        writing_file << c;
        n--;
      }
    }
    std::cout << std::endl;
    writing_file << std::endl;
  }
  writing_file.close();
}
