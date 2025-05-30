#include<iostream>
using namespace std;

int main(){
    int age;
    int*ptrAge = &age; //address of age(pointer referencing)

    string name;
    string *nameptr = &name;
    cout<<" Enter your name & age: ";
    cin>>name >>age;
    //*ptrAge & *nameptr - pointer Derefrencing
    cout<<"Your name is "<<(*nameptr)<<" , you're "<<(*ptrAge)<<" years old "<<endl;
    cout<<"The Address of name is stored in pointer(nameptr): "<<nameptr<<endl;
    cout<<"The Address of name is stored in pointer(ptrAge) "<<ptrAge<<endl;

    int*num1=new int(5); //Dynamic Memory allocation
    //The Refrence variable is not need for assiging the address to the pointer we can use new keyword 
    cout<<"The value within the pointer num1: "<<(*num1);

    int size;
    int *arr = new int[size]; //Dynamic Memory allocation for integer array(run time)

    cout<<"Enter the size of an array: ";
    cin>>size;

    cout<<"Enter the "<<size<<" element into an array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The array contains "<<size<<" element, they are: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}