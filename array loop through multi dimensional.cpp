#include<iostream>    //teo dimensional 
using namespace std;
int main(){
string names[2][4]={
{"A","B","C","D"},
{"E","F","G","H"}
};
for(int i=0;i<2;i++){
for(int j=0;j<4;j++){
cout<<names[i][j]<<"\n";
}
}
return 0;
}

#include <iostream>    //three dimensional 
using namespace std;

int main() {
  string letters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  return 0;
}

