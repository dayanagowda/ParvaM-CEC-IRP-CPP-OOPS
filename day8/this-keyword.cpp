#include<iostream>
using namespace std;

class Name{
    private:
        string name, branch;
        int sem;

    public:
        void setName(string n){
            this->name=n;
        }

        //As the parameter and private member name is same, it will assign some garbage vale
        //to avoid the issue, we can use"this" keyword to assign the parameter vale to private member

        void setDetails(string branch,int sem){
            this->branch=branch;
            this->sem=sem;
        }

        void showName(){
            cout<<"your Name is "<<name<<endl;
        }

        void showDetails(){
            cout<<"you're from "<<branch<<" branch, and you're studying in "<<sem<<" sem."<<endl;
        }
};

int main(){
    string studentName,studentBranch;
    int studentSem;

    cout<<"Enter your name, branch & sem: ";
    cin>>studentName>>studentBranch>>studentSem;

    Name name1;
    name1.setName(studentName);
    name1.setDetails(studentBranch,studentSem);
    name1.showName();
    name1.showDetails();
}