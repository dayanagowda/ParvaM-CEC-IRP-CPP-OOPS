#include<iostream>
using namespace std;
int main(){
    //declaring the variables with different datatype
    string name,college,branch,usn;
    char section;
    int age,sem;
    bool isStudent;
    float height;
    //initializing/assigning the values to the variable
    name="Dayana";
    section='A';
    age=19;
    college="CEC";
    branch=="AIML";
    usn="1CE24AI018";
    sem=2;
    isStudent=true;
    height=5.7;

    cout<<"Name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"height:"<<height<<endl;
    cout<<"college:"<<college<<",branch:"<<branch<<endl;
    cout<<"USN:"<<usn<<"Sem:"<<sem<<endl;
    cout<<"section:"<<section<<"Is he/she a student:"<<isStudent<<endl;
    //shift+Alt+bottom arrow-clone
    //ctrl+shift+-:open terminal
    //g++ variable.cpp
}
