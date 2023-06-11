#include<iostream>
using namespace std;
int main(){
    int d=1;
    switch (d){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"Tuesday";
        break;
        case 4:
        cout<<"wednesday";
        break;
        case 5:
        cout<<"thurday";
        break;
        case 6:
        cout<<"friday";
        break;
        case 7:
        cout<<"saturday";
        break;
        dafault:
        cout<<"invalid day week has only 7 days";
    }
}