#include<iostream>   //without vars
using namespace std;
int myf(){
    return 5+10;
}
int main(){
    cout<<myf();
    return 0;
}


#include<iostream>   //with vars
using namespace std;
int myf(int x,int y){
    return x+y;
}
int main(){
    cout<<myf(10,30);
    return 0;
}


#include<iostream>    //result in a variable
using namespace std;
int myf(int x,int y){
    return x+y;
}
int main(){
    int z=myf(10,30);
    cout<<z;
    return 0;
}