#include <iostream>
#include<fstream>
using namespace std;
class Student{
  public:
    int roll;
    string name;
    float marks;
    void input(){
        cout<<"Enter roll no. ";
        cin>>roll;
        cout<<"Enter your name ";
        cin>>name;
        cout<<"Enter your marks ";
        cin>>marks;
    }
    void display(){
        cout<<"Roll no.: "<<roll<<endl<<"Name: "<<name<<endl<<"Marks: "<<marks<<endl;
    }
};
int main() {
    Student s;
    int choice;
    cout << "1. Store Record\n2. Display Record\nEnter choice: ";
    cin>>choice;
    if(choice == 1){
        ofstream file("student.txt",ios::app);
        s.input();
        file<<s.roll<<" "<<s.name<<" "<<s.marks<<endl;
        file.close();
        cout<<"Record Stored successfully!!!";
    }else if(choice == 2){
        ifstream file("student.txt");
        cout<<endl<<"--- Stored Records ---"<<endl;
        while(file>>s.roll>>s.name>>s.marks){
            s.display();
            cout<<endl;
        }
        file.close();
    }else{
        cout<<"Invalid Choice!!!";
    }
    return 0;
}