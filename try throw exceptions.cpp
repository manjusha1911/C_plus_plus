#include<iostream>     
using namespace std;
int main(){
    try{
        int age=15;  //age=15
        if(age>=18){
            cout<<"enough old to vote";
        }else{
           throw (age);
        }
    }
    catch(int num){
        cout<<"not enough old to vote\n";
        cout<<"age"<<num;
    }
    return 0;
}



#include<iostream>   //catch will be skipped
using namespace std;
int main(){
    try{
        int age=20;   //age=20
        if(age>=18){
            cout<<"enough old to vote";
        }else{
           throw (age);
        }
    }
    catch(int num){
        cout<<"not enough old to vote\n";
        cout<<"age"<<num;
    }
    return 0;
}



#include <iostream>    //string
#include<string>
using namespace std;

int main() {
  try {
  string error="error";
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (error);
    }
  }
  catch (string er) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << er;  
  }
  return 0;
}


#include<iostream>      //505 error
using namespace std;
int main(){
    try{
        int age=15;  //age=15
        if(age>=18){
            cout<<"enough old to vote";
        }else{
           throw (505);    //505
        }
    }
    catch(int num){
        cout<<"not enough old to vote\n";
        cout<<"age: "<<num;
    }
    return 0;
}
