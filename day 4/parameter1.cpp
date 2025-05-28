#include<iostream>
using namespace std;

class Wish{
    private:
        string name;
        int age;

    public:
        Wish(){ //default constructor
            name = "Uknown";
            age = 0;
        }

        Wish(string n, int a); //parameterized constructor

        void birthdaywishes();
};
            cout<< "Happy Birthday "<< name<< "I Now You,re"<<age
            << "Years old." <<endl;
        }
};

//Defining the rules of parameterizied constructor outside the class using scope resolution operator
Wish :: Wish(string n, int a){
    name = n;
    age = a;
}

int main(){
    string personName;
    int personAge;

    Wish person1; //object declared
    person1.birthdaywishes();

    cout<< "Enter your name:";
    cin>> personName;
    cout<< "Enter your age:";
    cin>> personAge;

    Wish person2(personName,personAge);
    person2.birthdaywishes();
}