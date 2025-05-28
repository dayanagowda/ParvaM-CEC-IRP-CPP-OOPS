#include<iostream>
using namespace std;

class Interest{
    private:
        int principal,term,rate,totalInterest;
        float rateInPercent;

    public:
        int simpleInterest = 0;
        Interest(){ //default constructor
            principal = 0;
            term = 0;
            rate = 0;
            totalInterest = 0;
            rateInPercent = 0;
            cout<< "Total Interest Earned:"<<totalInterest<<endl;
        }
        void setValues(int a,int y){ //setter function
            principal = a;
            term = y;
        }
        void setRateValueInteger(int rateInInteger ){ //setter function
            rate=rateInInteger;

        }
        void setRateValueFloat(float rateInFloat){ //setter function
           rateInPercent= rateInFloat;
        }

        Interest(int p, int t,int r){ //parameterized constructor
            setValues(p,t);
            setRateValueInteger(r);
            simpleInterest = (principal * term * rate)/100;
            cout<<"Simple Interest for the following details: "<<endl;
            cout<<"Principal Amount: "<<principal<<endl;
            cout<<"No. of years(terms) : "<<term<<endl;
            cout<<"Rate of Interest(in Integer) : "<<rate<<endl;
            totalInterest= principal+simpleInterest;
            cout<<"Total Interest Earned : "<<totalInterest<<endl;
        }

        Interest(int p, int t,float rateInDecimal){ //parameterized constructor
            setValues(p,t);
            setRateValueFloat(rateInDecimal);
            simpleInterest = (principal * term * rateInPercent);
            cout<<"Simple Interest for the following details: "<<endl;
            cout<<"Principal Amount: "<<principal<<endl;
            cout<<"No. of years(terms) : "<<term<<endl;
            cout<<"Rate of Interest(in Decimals) : "<<rateInPercent<<endl;
            totalInterest= principal+simpleInterest;
            cout<<"Total Interest Earned : "<<totalInterest<<endl;
        }
        
        ~Interest(){ //automatically called to free up the memory used by constructor when object has lost the scope
            cout<<"Destructor has been called to destroy or free at the memory used by constructor "<<endl;
        }
};

int main(){
    int amount, year,rateOfInterest;
    float interestRate;

    Interest int1; //default constructor

    Interest int4; //default constructor 

    cout<<"Enter the Principal Amount,no of years & Rate of Interest(eg. 5):";
    cin>>amount>>year>>rateOfInterest;

    Interest int2(amount,year,rateOfInterest);

    cout<<"Enter the Principal Amount,no of years & Rate of Interest(eg. 5):";
    cin>>amount>>year>>interestRate;

    Interest int3(amount,year,interestRate);
}