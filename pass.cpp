#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
  int n;

  while (cin >> n, n){
    srand((unsigned)time(NULL));

    while (n){
      char c = rand() / 'z';
      if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')){
        cout << c;
        n--;
      }
    }
    cout << endl;
  }
}
