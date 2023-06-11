#include<iostream>    //break
using namespace std;
int main(){
    int i=0;
    while(i<10){
        if(i==5){
        break;
        }
        cout<<i<<"\n";
        i++;
    }
    return 0;
}




#include<iostream>    //continue
using namespace std;
int main(){
    int i=0;
    while(i<10){
        if(i==5){
            i++;
        continue;
        }
        cout<<i<<"\n";
        i++;
    }
    return 0;
}