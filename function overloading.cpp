#include<iostream>   //different function names
using namespace std;
int myf1(int x,int y){  // myf1 function
    return x+y;
}
double myf2(double x,double y){  //myf2 function
    return x+y;
}
int main(){
    int fun1=myf1(10,20);
    double fun2=myf2(4.35,6.38);
    cout<<fun1<<"\n";
    cout<<fun2;
    return 0;
}




#include<iostream>    //same function names
using namespace std;
int myf1(int x,int y){    //myf1 function
    return x+y;
}
double myf1(double x,double y){  //myf1 function  
    return x+y;
}
int main(){
    int fun1=myf1(10,20);
    double fun2=myf1(4.35,6.38);
    cout<<fun1<<"\n";
    cout<<fun2;
    return 0;
}