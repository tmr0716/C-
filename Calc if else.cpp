#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Choose operator from [+, -, *, /, %]: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>b;
    if(op == '+'){
        cout<<"Sum = "<<a+b;
    }
    else if(op == '-'){
        cout<<"Difference = "<<a-b;
    }
    else if(op == '*'){
        cout<<"Product = "<<a*b;
    }
    else if(op == '/'){
        if(b != 0){
            cout<<"Quotient = "<<a/b;
        }
        else{
            cout<<"Error!";
        }
    }
    else if(op == '%'){
        if(b != 0){
            cout<<"Remainder = "<<a%b;
        }
        else{
            cout<<"Error!";
        }
    }
    else{
        cout<<"Invalid operator!";
    }
}