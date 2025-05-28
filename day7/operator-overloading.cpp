#include<iostream>
using namespace std;

class Increment{
    private:
        int number, value,value1;

    public:
        void setNumber(int num){
            number=num;
        }

        //syntax for operator overloading
        //return_type operator symbol(parameter){parameter is option}
        //unary operator overloading
        void operator ++(){
            value = number +5;
        }

        void operator --(){
            value1 = number -5;
        }

        void showValue(){
            cout<<"Before Increment: "<<number<<endl;
            cout<<"After Increment: "<<value<<endl;
            cout<<"Before decrement: "<<number<<endl;
            cout<<"After decrement: "<<value1<<endl;
        }
};

int main(){
    int n;

    cout<<"Enter any number for incrementing its value by 1: ";
    cin>>n;
    Increment num1;

    num1.setNumber(n);
    ++num1;
    --num1;
    num1.showValue();

    cout<<"Enter After Incrementing: "<<++n<<endl;
    cout<<"Enter After Decremeenting: "<<--n<<endl;
}


