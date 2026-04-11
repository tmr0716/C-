#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    protected:
        string brand;
        int speed;
    public:
        void data(){
            cout<<"Enter Vehicle brand: ";
            cin>>brand;
            cout<<"Enter speed: ";
            cin>>speed;
        }
        void display(){
            cout<<"Vehicle brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<" km/h"<<endl;
        }
};
class Car : public Vehicle{
    private:
        int seats;
    public:
        void Cardata(){
            data();
            cout<<"Enter number of seats: ";
            cin>>seats;
        }
        void Cardisplay(){
            display();
            cout<<"Number of seats: "<<seats<<endl;
        }
};
class Bike : public Vehicle{
    private:
        string type;
    public:
        void Bikedata(){
            data();
            cout<<"Enter bike type (e.g., sports, cruiser): ";
            cin>>type;
        }
        void Bikedisplay(){
            display();
            cout<<"Bike type: "<<type<<endl;
        }
};
int main(){
    Car c;
    Bike b;
    cout<<"----- Enter Car Details -----"<<endl;
    c.Cardata();
    cout<<"\n----- Enter Bike Details -----"<<endl;
    b.Bikedata();
    cout<<"\n----- Displaying Car Details -----"<<endl;
    c.Cardisplay();
    cout<<"\n----- Displaying Bike Details -----"<<endl;
    b.Bikedisplay();
    return 0;
}