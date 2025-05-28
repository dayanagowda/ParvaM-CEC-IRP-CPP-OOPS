#include<iostream>
using namespace std;

class Calculate{
    public:
        int result;

        int sum(int num){
            result= num+num;
            return result;
        }

        int sum(int num1,int num2){
            result=num1+num2;
            return result;
        }

        int sum(float num1,float num2){
            float(result)=num1+num2;
            return result;
        }
};

int main(){
    int number1,number2;
    float decimal1,decimal2;

    cout<<"Enter any two integer: ";
    cin>>number1>>number2;

    cout<<"Enter any two decimal number: ";
    cin>>decimal1>>decimal2;

    Calculate call;
    cout<<"Adding the number itself: "<<call.sum(number1)<<endl;
    cout<<"Adding the 2 integers: "<<call.sum(number1,number2)<<endl;
    cout<<"Adding the 2 decimals: "<<call.sum(decimal1,decimal2)<<endl;
}