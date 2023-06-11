#include<iostream>
#include<string>
using namespace std;
class myc{
    public:
    string brand="ford";
    void bmw(){
        cout<<"Lambogini is my favorite car\n";
    }
};
class myc2: public myc{
    public:
    string model="Mustang";
};
int main(){
    myc2 obj;
    obj.bmw();
    cout<<obj.brand+" "+obj.model;
    return 0;
}