#include<iostream>
using namespace std; 

class Customer{
    public:
    string firstName,lastName;
    int age,rating;


Customer(){
    firstName="AD";
    lastName="Doe";
    age=10;
    rating;
}
void showDetails(){
    cout<<"Customer Name:"<<firstName<<""<<lastName<<endl;
    cout<<"Customer age:"<<age<<endl;

}
void giveRating(int rate);

void showRating(){
    cout<<"you've given "<<rating<<" star rating.Thankyou!"<<endl;
}
};

void Customer ::giveRating(int rate){
    rating=rate;

}

int main(){
    Customer cust1; //invoked the constructor to assign the default value

    cust1.showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName="AD";
    cust2.lastName="RAO";
    cust2.age=24;

    int starRating;

    cout<<"Give your Rating(0 to 5):";
    cin>> starRating;
    cust2.giveRating(starRating);
    cust2.showRating();
    cust2.showDetails();
    

}