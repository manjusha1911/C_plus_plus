#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 1; ++i) {
    cout << "Outer: " << i << "\n"; 
    
    // Inner loop
    for (int j = 0; j <= 10; j+=2){
      cout << " Inner: " << j << "\n";
      
    }
  }
  return 0;
}