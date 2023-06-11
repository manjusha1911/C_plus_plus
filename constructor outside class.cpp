#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y,int z);
};
car::car(string x,string y,int z){
    brand =x;
    model=y;
    year=z;
}
int main(){
    car obj("BMW","X5",1999);
    car obj2("Lambogini","Xyz",2023);
    cout<<obj.brand<<" "<<obj.model<<" "<<obj.year<<"\n";
    cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
    return 0;
}