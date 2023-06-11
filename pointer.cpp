#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="egg birayni";
    string* ptr=&food;
    cout<<food<<"\n";
    cout<<&food<<"\n";
    cout<<ptr;
    return 0;
}