#include<iostream>
#include<string>
using namespace std;
int main(){
    struct{
        int num;
        string mystring;
    } ms;
    ms.num=10;
    ms.mystring="SAI RAM";
    cout<<ms.num<<"\n";
    cout<<ms.mystring;
// cout<<ms.num<<"\n"<<ms.mystring;  //we can print in 1 line
    return 0;  
}