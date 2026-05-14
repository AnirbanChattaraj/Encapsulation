//Student Class
#include<iostream>
using namespace std;
class Student{
    private:
    int marks;
    public:
    void setMarks(int m){
        if (marks<0 || marks>100)
        {
           cout<<"Invalid marks!";
        }
        else{
            marks=m;
        }
    }
    void getMarks(){
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    Student S;
    int m;
    cout<<"Enter your valid marks(out of 100):";
    cin>>m;
    S.setMarks(m);
    S.getMarks();

}