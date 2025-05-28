#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;

    public:
        string pizzaType,size;
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout<<"order the Pizza by selecting your favorite Pizza: "<<endl;
        }

        void bookPizza(){
            cout<<"booking Pizza!"<<endl;
        }

        void bakePizza(string type,string pizzaSize){
            pizzaType = type;
            size = pizzaSize;
            cout<<"Pizza Type: "<<pizzaType<<" , size"<<size<<endl;
        }

        void addIngredient(string secret){
            secretIngredient = secret;
        }

        void confirmOrder(){ 
            cout<<"order confirmed!"<<endl;
        }

        bool checkPayment(int money,bool payment){
            
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone){
                cout<<"Amount Paid: Rs,"<<money<<" ,Payment Successfull!"<<endl;   
                confirmOrder();
                bookPizza();
                return true;     
            }
            else{
                cout<<"Amount Due: Rs,"<<price<<" ,Payment pending!"<<endl;
                return false;
            }
        }

        void servePizza(int amount,bool paid, string typeOfPizza,string sizeOfPizza, string secretItem){
            if(!checkPayment(amount,paid)){
                cout<<"order cancelled due to pending payment"<<endl;
                return;
            }
            bakePizza(typeOfPizza,sizeOfPizza);
            addIngredient(secretItem);
            cout<<"Pizza served! Enjoy your Pizza"; 
        }
};

int main(){
    string piztype, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout<<"Enter the Pizza Type(Veg/Non-Veg), size(Regular/Medium/Large)";
    cin>>piztype>>size;

    pizzaAmount=399;
    cout<<"Did the pay the amount(type 1 if paid/Type 0 if not paid):";
    cin>>amountPaid;

    customer1.servePizza(pizzaAmount,amountPaid,piztype,size,secretIng);
}