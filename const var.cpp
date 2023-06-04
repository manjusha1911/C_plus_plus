#include<iostream>
using namespace std;
int main(){
    const int a=10;
    // a=15  //error will come
    //  const unchangeable and read-only
    cout<<a;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}