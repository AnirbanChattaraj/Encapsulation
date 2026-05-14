//BankAccount Class
#include<iostream>
using namespace std;
class Bankaccount{
    private:
    int balance;
    public:
    void setBalance(int b){
        if (balance<0)
        {
            cout<<"Invalid balance";
        }
        else{
            balance=b;
        }
    }
    void getBalance(){
        cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    Bankaccount user1;
    int amount;
    cout<<"Enter your amount:";
    cin>>amount;
    user1.setBalance(amount);
    user1.getBalance();
}