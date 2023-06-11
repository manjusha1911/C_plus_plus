#include<iostream>   //break
using namespace std;
int main(){
for (int i=1;i<=5;i++){
if (i==4){
break;
}
cout<<i<<"\n";
}
return 0;
}



#include<iostream>    //continue
using namespace std;
int main(){
for (int i=1;i<=5;i++){
if (i==4){
continue;
}
cout<<i<<"\n";
}
return 0;
}