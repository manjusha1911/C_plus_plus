#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the a value:\n";
    cin>>a;
    cout<<"enter the b value:";
    cin>>b;
    int i=1,m=0;
    while (i<=b){
        m+=a;
        i+=1;
    }
     cout<<m;
    return 0;

}