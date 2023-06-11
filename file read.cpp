#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream    // Create a text file
    writefile("filename.txt");   
    writefile("Files can be tricky, but it is fun enough!"); // Write to the file
    writefile.close();  // Close the file
    string mytxt;
    ifstream  // Read from the text file
    readfile("filename.txt");
    while(getline(readfile,mytxt)){
        cout<<mytxt;
    }
    readfile.close();
}   

