
// #include<iostream>     //integer array
// using namespace std;
// int main() {
//     int num[5]= {10, 20, 30, 40, 50};
//     for (int i=0;i<5;i++){
//         cout << num[i] << "\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}




#include <iostream>   //string array
#include<string>
using namespace std;

int main() {
  string myNumbers[4] = {"sai","ram","sreeram","mahadev"};
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}



#include <iostream>     //with serial number
#include<string>
using namespace std;

int main() {
  string myNumbers[4] = {"sai","ram","sreeram","mahadev"};
  for (int i = 0; i < 4; i++) {
    cout <<i+1<<" = "<< myNumbers[i] << "\n";
  }
  return 0;
}
