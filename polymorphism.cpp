#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
    void animalsound(){
        cout<<"animal makes a sound\n";
    }
};
class pig : public animal{
    public:
    void animalsound(){
        cout<<"pig says wee wee\n";
    }
};
class dog :public animal{
    public:
    void animalsound(){
        cout<<"the dong says bow bow bow";
    }
};
int main(){
    animal obj;
    pig mypig;
    dog mydog;
    obj.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;
}