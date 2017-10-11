#include <iostream>
#include <random>

int main()
{
  int n;

  std::random_device rnd;
  std::mt19937 mer(rnd());
  std::uniform_int_distribution<> randc('A', 'z');
  while (std::cin >> n, n){
    while (n){
      char c = randc(mer);
      if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')){
        std::cout << c;
        n--;
      }
    }
    std::cout << std::endl;
  }
}
