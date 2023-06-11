#include<iostream>  //one time calling
using namespace std;
void myf(){
    int a=20,b=30;
    cout<<a+b;
}
int main(){
    myf();
    return 0;
}



#include<iostream> //multiple times calling
using namespace std;
void myf(){
    int a=20,b=30;
    cout<<a+b<<"\n";
}
int main(){
    myf();
    myf();
    myf();
    return 0;
}




