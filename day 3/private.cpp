#include<iostream>
using namespace std;

class company{
    private:
        string cin;
        int totalworth=0;

    public:
        string gstNum,location;
        int numOfemp;

        //setter method
        void setDetails(string cinNum,int worth){
            cin=cinNum;
            totalization=worth;
        }

        //getter method
        void getDetails(string gstNumber){
            cout<<"corporate identify number:"<<cin<<endl;
            cout<<"Total worth of the company:"<<totalworth<<endl;
        }

        void addBasicDetails(); //declare the member function
};

//function definitiionoutside the class
//syntax: return_type class_name :: member_function
void company::getBasicDetails(){  //scope Resolution operator  
    cout<<"gst Number:"<<gstNum<<endl;
    cout<<"Location:"<<location<<endl;
    cout<<"Number of Employee:"<<numOfEmp<<endl;
}

int main(){
    Company comp1; //Object created
    comp1.gstNum="1234abcd678";
    comp.location="Bengaluru";
    comp1.numOfEmp=50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyWorth;

    cinNumber="9876arlt789";
    companyWorth=5000000;

    comp1.setDetails(cinNumber,companyWorth);
    comp1.getDetails(comp1,gstNum);
}