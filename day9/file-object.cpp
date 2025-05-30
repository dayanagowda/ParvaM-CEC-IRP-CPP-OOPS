#include<iostream>
#include<fstream>
using namespace std;

class Car{
    private:
        string brand,model,variant,features[10];
        int year, price,featureCount;

    public:
    void addDetails(string carBrand, string carModel, string carVariant, int year, int price){
        brand= carBrand;
        model= carModel;
        variant= carVariant;
        this->year=year;
        this->price=price;
    }

    void addCarFeatures(int count){
        featureCount=count;
        cin.ignore();
        cout<<"Enter the "<<count<<"features of the car: ";
        for(int i=0;i<count;i++){
            cout<<"Features - "<<i+1<<":";
            getline(cin,features[i]); //can enter multiple words along with spaces
        }
        cout<<"click enter button for input"<<endl;
    }

    void storeCarDetails(){
        ofstream store("car_details.txt"); 
        store<<"The car details are as follows: "<<endl;
        store<<"car brand: "<<brand<<endl;
        store<<"car model: "<<model<<endl;
        store<<"car variant: "<<variant<<endl;
        store<<"launch year: "<<year<<endl;
        store<<"offer price:Rs. "<<price<<endl;
        store<<"car has these features: "<<endl;
        for(int i=0;i<featureCount;i++){ 
           
            store<<"\t"<<i+1<<". "<<features[i]<<endl;
        }
        store<<"-----------------------------------";
    }
    

};

int main(){
    string car_brand,car_model,car_variant,car_features[10];
    int features_count, launch_year,launch_price;

    cout<<"enter the car details: "<<endl;
    cout<<"brand,model,variant,launch year,launch price: "<<endl; 
    cout<<"ex: Tata,curvv,(petrol/deisel/ev),2025,150000:  "<<endl;
    cin>>car_brand>>car_model>>car_variant>>launch_year>>launch_price;

    cout<<"enter the number of feature: "<<endl;
    cin>>features_count;

    Car car1;
    car1.addDetails(car_brand, car_model, car_variant, launch_year, launch_price);
    car1.addCarFeatures(features_count);
    car1.storeCarDetails();
    
    Car car2;
    car2.addDetails("BMW","M3", "petrol", 2022, 2250000);
    car2.addCarFeatures(4);
    car2.storeCarDetails();
}
