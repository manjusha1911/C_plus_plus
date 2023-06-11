#include<iostream>     //short hand
#include<string>
using namespace std;
int main(){
int age=18;
string vote=(age>=18)? "eligible to vote":"not eligible to vote";
cout<<vote;
return 0;
}



#include<iostream>     //normal if else
#include<string>
using namespace std;
int main(){
    int age=18;
    if (age>=18){
        cout<<"eligible to vote";
    }else{
        cout<<"not eligible to vote";
    }
    return 0;
}