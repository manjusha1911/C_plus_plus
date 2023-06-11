#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
//   for (int i = 0; i <sizeof(int)+1; i++)     //both will give same o/p
  for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}