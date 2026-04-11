#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
        float marks;
    public:
        void data(){
            cout<<"Enter roll number: ";
            cin>>roll;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void display(){
            cout<<"Roll number: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main(){
    Student s;
    s.data();
    s.display();
    return 0;
}