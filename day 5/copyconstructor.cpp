#include<iostream>
using namespace std;

class Teacher{
    private: //by deafult all the data member of the class comes under the private specifier
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher(){ //default constructor
            branch = "AIML";
            name = "Dayana";
            qualification = "M.Tech";
            experience = 5;
            cout<<"welcome, Dayana!"<<endl;
        }

        void setData(string Tname, string Tbranch, string Tqual,int exp){ //setter
            name = Tname;
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName,string TeacherBranch,string TeacherQual,int TeacherExp){ //parametreized constructor
            setData(TeacherName,TeacherBranch,TeacherQual,TeacherExp);
            cout<<"welcome, Dayana!"<<endl;
            cout<<"you've gratuated with ,"<<qualification<<"degree.And you've "<<experience
            <<"years of experience"<<endl;
        }

        //syntax for copy constructor: constructor(Refrence-constructor address-of-the object)

        Teacher(Teacher & t){ //copy constructor
            name = t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;
        }

        void getData(){ //getter
            cout<<"welcome, Dayana!"<<endl;
            cout<<"you've gratuated with ,"<<qualification<<"degree.And you've "<<experience
            <<"years of experience"<<endl;
        }
        ~Teacher(){
            cout<<"Object's work is done,clearing the memory!"<<endl;
        }
};

int main(){
    string n,q,b;
    int e;

    Teacher teacher1; //object created & invoked the default constructor

    cout<<"Enter your name, qualification, brach & experience: ";
    cin>>q>>b>>e;

    Teacher teacher2(n,b,q,e);
    Teacher teacher3 = teacher2;
    teacher3.getData();

}