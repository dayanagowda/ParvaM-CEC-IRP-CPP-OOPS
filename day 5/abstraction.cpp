#include<iostream>
using namespace std;

class Bike{
    public:
        string brand ,model,engine_type;
        int year, price;

    void injectFuel(){ //Internale Data-Hidden
        cout<<" Injected the fuel - petrol";
    }
    void igniteFuel(){ //Internale Data-Hidden
        cout<<"Ignite the fuel! "<<endl;
    }
    void start(string model){
        injectFuel();    //abstraction
        igniteFuel();    //abstraction
        cout<<model<<"Started,Happy Joureny!";
    }

    void stopAcceleration(){
        cout<<"Acceleration Stopped!"<<endl;
    }

        void stopFuelFlow(){
        cout<<" Stopping the Fuel"<<endl;
    }

    void stop(){
        stopAcceleration();    //abstraction
        stopFuelFlow();        //abstraction
        cout<<model<<"stoped,Lock the vehicle!";
    }
};

int main(){
    Bike bike1;
    bike1.brand="Balaji";
    bike1.model="Pulsar NS125";;
    bike1.engine_type="BS6";
    bike1.year=2022;
    bike1.price= 150000;
    bike1.start(bike1.model);
    bike1.stop();
}