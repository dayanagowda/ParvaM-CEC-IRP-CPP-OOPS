#include<iostream>
using namespace std;

class Base{
    public:
        void showBase(){
            cout<<"Base member function has been called! "<<endl;
        }
};

class Derived : public Base{ 
    public:
        void showBase(){ //function overloading
            cout<<"Derived member function has been called! "<<endl;
            //syntax: Base class name::member function
            Base::showBase(); //calling the number of Base class using scope resolution operator
        }
};

//example:
class Animal{
    public:
        void makeSound(){
            cout<<"Animal make some sound!"<<endl;
        }
};

class Dog : public Animal{ //derived class(Animal->dog)
    public:
        void makeSound(){ //function overriding(same member function name)
            Animal :: makeSound(); //calling the Animal class-member function
            cout<<"Dog Barks!! "<<endl;
        }
};
class Cat : public Animal{ //derived class(Animal->dog)
    public:
        void makeSound(){ //function overriding(same member function name)
            cout<<"Cat meow !! "<<endl;
        }
};
int main(){
    // Base b1;
    // b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}
