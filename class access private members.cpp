//To access a private attribute, use public "get" and "set" methods:
#include<iostream>
using namespace std;
class myc{
    private:
    int salary;
    public:
    void mysalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    myc obj;
    obj.mysalary(50000);
    cout<<obj.getsalary();
    return 0;
}
