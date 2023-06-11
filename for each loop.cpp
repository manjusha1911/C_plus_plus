/*"for each loop" is used exclusively to loop through
 elements in an array (or other data sets):
*/

#include<iostream>
using namespace std;
int main(){
    int numbers[5]={10,20,30,40,50,};
    for(int i:numbers){
        cout<<i<<"\n";
    }
    return 0;
}




