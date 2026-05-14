//Employee Class
#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
        if (s<10000)
        {
            cout<<"Invalid salary"<<endl;
            salary=0;
        }
        else{
            salary=s;
        }
    }
    void getSalary(){
        cout<<"Balance:"<<salary<<endl;
    }
};
int main(){
    Employee user1;
    Employee user2;
    int amount;
    cout<<"Enter your salary:";
    cin>>amount;
    user1.setSalary(amount);
    user1.getSalary();
    user2.setSalary(amount);
    user2.getSalary();
}