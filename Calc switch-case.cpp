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
    switch(op){
        case '+':
            cout<<"Sum = "<<a+b;
            break;
        case '-':
            cout<<"Difference = "<<a-b;
            break;
        case '*':
            cout<<"Product = "<<a*b;
            break;
        case '/':
            if(b != 0){
                cout<<"Quotient = "<<a/b;
            }
            else{
                cout<<"Error!";
            }
            break;
        case '%':
            if(b != 0){
                cout<<"Remainder = "<<a%b;
            }
            else{
                cout<<"Error!";
            }
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;
}