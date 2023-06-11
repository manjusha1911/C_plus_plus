#include<iostream>
#include<string>
using namespace std;
int main(){
    string num[3][2][3]={
    {
        {"om","sai","ram"},
        {"OM","SAI","RAM"}
    },
    {
    {"jai","sree","Ram"},
    {"JAI","SREE","rAM"}
    },
    {
    {"har","Har","mahadev"},
    {"HAR","hAR","MAHADEV"}
    }
    };
    cout<<num[0][2][2];
    // cout<<num[1][2][2];  //output "mahadev"
    // cout<<num[1][3][2];  //out put "MAHADEV"
    return 0;
}


#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
}
