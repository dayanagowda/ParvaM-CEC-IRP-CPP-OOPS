#include<iostream>
using namespace std;

class Calculation{
    public:
        //member data
        int num1, num2;
        float res;

        //declared the constructor
        //ctrl+?:comment
        Calculation(){
            num1= 5;
            num2= 10;
        }

        //member function
        void showOutput(){
            cout<<"Addition: "<<num1+num2<<endl;
            cout<<"Subtraction: "<<num1-num2<<endl;
            cout<<"Multiplication: "<<num1*num2<<endl;
            cout<<"Quotient: "<<num1/num2<<endl;
            cout<<"Reminder: "<<num1%num2<<endl;
        }
        
};

int main(){
    //initializing the deafult value using constructor automatically when object is declared
    Calculation c1; //object
    Calculation c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    c2.showOutput();
}