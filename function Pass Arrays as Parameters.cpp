#include<iostream>
using namespace std;
void myf(int myn[5]){
    for(int i=0;i<5;i++){
        cout<<myn[i]<<"\n";
    }
}
int main(){
    int myn[5]={10,20,30,40,50};
    myf(myn);
    return 0;
}