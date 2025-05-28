#include<iostream>
using namespace std;

class Parent{
    private:
        int net_worth=0;
    public:
        string family_name , family_head;
        int number_of_members;

        void setData(int worth,string familyName, string familyHead ,int member_count){
            net_worth = worth;
            family_name = familyName;
            family_head = familyHead;
            number_of_members = member_count;
        }

        int showNetworth(){ //getter
           return net_worth;
        }

        int getFamilyInfo(){ //getter
            cout<<"I'm from "<<family_name<<"family,and my family head is "<<family_head
            <<" .Our Family's Net worth is about "<<showNetworth()<<endl;

        }
};
//syntax for the declaring the derived class
//class derived class name : accessibility mode base class name
//by default : derived class uses private accessibility mode
//if derived class uses private accessibility mode then public data & member function of the base class will become private
//if derived class uses public accessibility mode then public data & member function of the base class will become public

//class Child : Parent{ //derived class(by default private)}
//class Child : private parent{ //derived class(private accessibility mode)}

class Child : public Parent{ //dervied class(private accessibility mode)
    public:
        string member_name;
        int age;

        void addDetails(string name, int person_age){ //member function
            member_name = name;
            age = person_age;
        }

    void getFamilyDetails(){ //member function
        cout<<" My name is "<<member_name<<" and I'm "<<age<<" years old.";
        getFamilyInfo(); //inherting the properties of the base class
    }

};

int main(){ 
    string fName, fHead , cName;
    int childage,fworth ,fMembers;

    cout<<"Enter your family name,family head,number of members & networth:";
    cin>>fName>>fHead>>fMembers>>fworth;

    Parent p1;
    p1.family_name;
    //p1.net_worth can't access bcz it is private
    p1.setData(fworth,fName,fHead,fMembers);
    p1.getFamilyInfo();

    cout<<"Enter your name & age: ";
    cin>>cName>>childage;

    Child c1;
    //c1.family_head:(as child class is derived with public accessibility mode
    //we can directly accesss the public data of the base class)
    c1.setData(fworth,fName,fHead,fMembers);
    c1.addDetails(cName, childage);
    c1.getFamilyDetails();

}    