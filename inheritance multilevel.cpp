#include<iostream>
using namespace std;
class parentC{
    public:
    void myf(){
        cout<<"Parent class";
    }
};
class childC: public parentC{
};
class grandchildC: public childC{
};
int main(){
    grandchildC obj;
    obj.myf();
    return 0;
}