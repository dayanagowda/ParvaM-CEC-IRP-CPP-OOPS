#include<iostream>
#include<fstream> //header file for handlingthe files(read/write)
using namespace std;

int main(){
    //fstream headerfile provides 3 classess:
    //fstreambase
    //ifstream(it is derived by fstreambase)
    //ofstream(it is derived by fstreambase)
    //writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout<<"Enter your name and age: ";
    cin>>name>>age;
    out<<" hello "<<name<<"!"<<endl;
    cout<<"you're"<<age<<"year old. "<<endl;
    out.close();

    ifstream read("abc.txt ");
    string line;
    cout<<"file contains: "<<line<<endl;
    while(getline(read,line)){
        cout<<line<<endl;
    }
    getline(read,line);
    cout<<"File contains: "<<line<<endl;
    read.close();
}