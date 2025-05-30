#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id,string name,int exp,float salary){
            employeeID=id;
            employeeName=name;
            experience=exp;
            this->salary=salary;
        }

        void showDetails(){
            cout<<"The employee with name "<<employeeName<<" bearing "<<employeeID<<" have "
            <<experience<<" years of experience and receives a salary of Rs. "<<salary<<"/-";
        }
};
