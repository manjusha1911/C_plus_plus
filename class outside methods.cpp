#include<iostream>
using namespace std;
class myc{
    public:
    void mym();
};
void myc::mym(){
    cout<<"HELLO WORLD";
}
int main(){
    myc myobj;
    myobj.mym();
    return 0;
}

