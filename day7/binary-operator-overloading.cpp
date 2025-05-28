#include<iostream>
using namespace std;

class Complex{
    int real, imaginary; //private member

    public:
        Complex(){ //default constructor
            real=0;
            imaginary=0;
        }
    
        Complex(int r,int i){ //parameterized constructor
            real=r;
            imaginary=i;
        }

        //binaryoperator overloading
        Complex operator +(const Complex & c){
            Complex temp;
            temp.real=real + c.real;
            temp.imaginary=imaginary + c.imaginary;
            cout<<"First Complex Numbers: "<<real<<"+"<<imaginary<<" i "<<endl;
            cout<<"second Complex Numbers: "<<c.real<<"+"<<c.imaginary<<" i "<<endl;
            return temp;
        }

        Complex operator -(const Complex & c){
            Complex temp;
            temp.real=real - c.real;
            temp.imaginary=imaginary - c.imaginary;
            cout<<"First Complex Numbers: "<<real<<"-"<<imaginary<<" i "<<endl;
            cout<<"second Complex Numbers: "<<c.real<<"-"<<c.imaginary<<" i "<<endl;
            return temp;
        }

        void showSum(){
            cout<<"Sum of 2 Complex Numbers: "<<real<<"+"<<imaginary<<" i "<<endl;
        }

        void showDifference(){
            cout<<"Difference of 2 Complex Numbers: "<<real<<"-"<<imaginary<<" i "<<endl;
        }
};

int main(){
    int r1,r2,i1,i2;
    cout<<"Sum of First Complex Numbers(real number & imaginary number: eg. 5+3i):"<<endl;
    cin>>r1>>i1;

    cout<<"Sum of second Complex Numbers(real number & imaginary number: eg. 10+5i):"<<endl;
    cin>>r2>>i2;

    Complex comp1(r1,i1);
    Complex comp2(r2,i2);

    Complex sum = comp1+comp2;
    Complex Diff = comp1-comp2;

    cout<<"First complex number:"<<r1<<" + "<<i1<<"i"<<endl;
    cout<<"second complex number:"<<r2<<" + "<<i2<<"i"<<endl;

    sum.showSum();
    Diff.showDifference();
}
