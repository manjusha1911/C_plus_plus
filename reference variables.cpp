#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="Egg biryani";
    string &meal=food;
    cout<<food<<"\n";
    cout<<meal;
    return 0;
}