#include<iostream>
#include<string>
using namespace std;
void myf(string name="manjusha"){
    cout<<name<<"\n";
}
int main(){
    myf();
    myf("SAI RAM");
    return 0;
}