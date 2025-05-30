#include<iostream>
using namespace std;

void sayHello(){  //function declaration
    cout<<"Hello"<<endl;   //function definition
}

int sayHi(string name){ //function with parameter
    cout<<"Hi,"<< name;
}

int sayHi(string fname,string name,int age){ //function with different parameter
    cout<<"Hi,"<< fname<<" "<<name<<",age:"<<age<<endl;
}

int main(){
    string FirstName,lastName,friendName;
    int Age;
    cout<<"Enter your first name:";
    cin>>FirstName;
    cout<<"Enter your last name:";
    cin>>lastName;
    cout<<"Enter your age:";
    cin>>Age;
    cout<<"Enter your friend's name:";
    cin>>friendName;
    sayHello(); //function call
    sayHi(FirstName); //function call with arguments
    sayHi(friendName);
    greet(FirstName,lastName,Age);
}
 