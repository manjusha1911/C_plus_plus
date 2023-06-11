#include<iostream>
#include<string>
using namespace std;
class myc{
    public:
    int num;
    string mystr;
};
int main(){
    myc obj;
    obj.num=100;
    obj.mystr="SAI RAM";
    cout<<obj.num<<"\n";
    cout<<obj.mystr;
    return 0;
}