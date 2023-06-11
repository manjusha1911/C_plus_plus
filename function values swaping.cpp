#include<iostream>
using namespace std;
void mys(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int fn =10;
    int sn=20;
    cout<<"before swap :"<<fn<<","<<sn<<"\n";
    mys(fn,sn);
    cout<<"after swap :"<<fn<<","<<sn;
    return 0;

}