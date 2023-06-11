#include<iostream>     
using namespace std;
int main(){
    try{
        int age=15; 
        if(age>=18){
            cout<<"enough old to vote";
        }else{
           throw (505);
        }
    }
    catch(...){    //(...)
        cout<<"not enough old to vote\n";
    }
    return 0;
}
