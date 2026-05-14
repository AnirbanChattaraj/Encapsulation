//ATM Class
#include<iostream>
using namespace std;
class ATM{
    private:
    int pin;
    int balance=0;
    public:
    void setpin(int p){
        if (p>=1000 && p<=9999 )
        {
            pin=p;
        }
        else{
            cout<<"Enter valid 4 digit pin"<<endl;
        }
    }
    void showbalance(){
        cout<<"Balance:"<<balance<<endl;
    }
    void deposit(int amount){
        if (amount<0)
        {
           cout<<"Invalid amount"<<endl;
           cout<<"Enter valid amount to deposit";
        }
        else{
            balance=balance+amount;
            cout<<amount<<"|desposited succesfully"<<endl;
        }
    }
        void withdrawal(int amount){
        if(amount > balance){
            cout << "Insufficient balance" << endl;
        }
        else{
            balance -= amount;
            cout << amount << " withdrawn successfully" << endl;
        }
    }
};
int main(){
    ATM a;
    int p,amount;
    cout<<"Enter your pin:";
    cin>>p;
    a.setpin(p);
    cout<<"Enter the amount you want to deposit:";
    cin>>amount;
    a.deposit(amount);
    a.showbalance();
    cout<<"Enter the amount you wish to withdraw:";
    cin>>amount;
    a.withdrawal(amount);
}