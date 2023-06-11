#include<iostream>
using namespace std;
class employee{
    protected:
    int salary;
};
class programmer:public employee{
    public:
    int bonus;
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    programmer obj;
    obj.setsalary(60000);
    obj.bonus=20000;
    cout<<obj.getsalary()<<"\n";
    cout<<obj.bonus;
    return 0;
}
