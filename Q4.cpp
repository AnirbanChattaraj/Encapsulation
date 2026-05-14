//Mobile Class
#include<iostream>
using namespace std;
class Mobile{
    private:
    string password;
    public:
    void setPassword(string p){
        if (p.length()<6)
        {
            cout<<"Invalid password"<<endl;
            cout<<"Password must contain atleast 6 characters!"<<endl;
        }
        else{
            password=p;
        }
    }
    void getPassword(){
        cout<<"Password:"<<password<<endl;
    }
};
int main(){
    Mobile user1;
    string pw;
    cout<<"Enter your Passsword(6 characters):";
    cin>>pw;
    user1.setPassword(pw);
    user1.getPassword();
}