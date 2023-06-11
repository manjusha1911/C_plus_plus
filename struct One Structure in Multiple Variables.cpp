#include<iostream>
#include<string>
using namespace std;
int main(){
    struct{
        int num;
        string mystr;
    } ms1,ms2,ms3;
    ms1.num=10;
    ms1.mystr="SAI RAM";
    ms2.num=20;
    ms2.mystr="JAI SREE RAM";
    ms3.num=30;
    ms3.mystr="HAR HAR MAHADEV";
    cout<<ms1.num<<"\n"<<ms1.mystr<<"\n";
    cout<<ms2.num<<"\n"<<ms2.mystr<<"\n";
    cout<<ms3.num<<"\n"<<ms3.mystr;
    return 0;
}