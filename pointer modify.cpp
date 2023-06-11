#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="pizza";
    string* ptr=&food; 

    cout<<food<<"\n";
    cout<<*ptr<<"\n";
    cout<<&food<<"\n";
    cout<<ptr<<"\n\n";
    *ptr="Egg Biryani";
    cout<<*ptr<<"\n";
    cout<<food;
    return 0;
}