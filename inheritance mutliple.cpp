#include<iostream>
using namespace std;
class grandparent{
    public:
    void myf(){
        cout<<"grandparent class\n";
    }
};
class parent{
    public:
    void myf2(){
        cout<<"parent class\n";
    }
};
class child : public grandparent,public parent{
};
int main(){
    child obj;
    obj.myf();
    obj.myf2();
    return 0;
}