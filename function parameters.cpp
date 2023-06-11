#include<iostream>   //int
using namespace std;
void myf(int a,int b){
    cout<<a+b;
}
int main(){
    myf(10,20);
    return 0;   //op=30
}


#include<iostream>   //int
using namespace std;
void myf(int a,int b);
int main(){
    myf(10,20);
    myf(20,30);
    myf(100,200);
    return 0;
}
void myf(int a,int b){
    cout<<a+b<<"\n";    //op=30
}



#include<iostream>    //string 
#include<string>
using namespace std;
void myf(string god){
    cout<<god<<"\n";
}
int main(){
    myf("OM SAI RAM");
    myf("JAI SREE RAM");
    myf("HAR HAR MAHADEV");
    return 0;
}


#include<iostream>    //string 
#include<string>
using namespace std;
void myf(string god,int age){
    cout<<god<<" :"<<age<<"\n";
}
int main(){
    myf("OM SAI RAM",20);
    myf("JAI SREE RAM",30);
    myf("HAR HAR MAHADEV",40);
    return 0;
}