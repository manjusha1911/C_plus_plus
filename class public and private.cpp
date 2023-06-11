#include<iostream>
using namespace std;
class myc{
    public:
    int x;
    private:
    int y;
};
int main(){
    myc obj;
    obj.x=20;
    obj.y=200;
    return 0;
         
}            //output : error: y is private




#include<iostream>
using namespace std;
class myc{
    public:
    int x;
    int y;
};
int main(){
    myc obj;
    obj.x=20;
    obj.y=200;
    cout<<obj.x<<" "<<obj.y;
    return 0;
         
}       //output: 20 200
