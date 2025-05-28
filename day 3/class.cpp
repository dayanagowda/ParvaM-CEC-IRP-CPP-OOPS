#include<iostream>
using namespace std;

//syntax
//class class_name  //class decleration
class Student{
    public:
      string name, college,branch; //Data
      int sem;

      void show(){
          cout<<"Name:"<<name<<endl;
          cout<<"college:"<<college<<endl;
          cout<<"branch:"<<branch<<endl;
          cout<<"semester:"<<sem<<endl;
      }
};

int main(){
    Student student1; //object creation
    student1.name="Dayana"; //Assiging the value to the class using object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=8;
    
    student1.show();

    Student student2; //object creation
    student2.name="Dayana"; //Assiging the value to the class using object
    student2.college="CEC";
    student2.branch="AIML";
    student2.sem=8;
    

    student2.show();
}  