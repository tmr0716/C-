#include<iostream>
using namespace std;
int Add(int a, int b){
    return a+b;
}
int Sub(int a, int b){
    return a-b;
}
int Mul(int a, int b){
    return a*b;
}
int Div(int a, int b){
    if(b != 0){
        return a/b;
    }
    else{
        cout<<"Not Defined!";
        return 0;
    }
}
int Mod(int a, int b){
    if(b != 0){
        return a%b;
    }
    else{
        cout<<"Not Defined!";
        return 0;
    }
}
int main(){
    int x,y;
    char op;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Choose operator from [+, -, *, /, %]: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>y;
    switch(op){
        case '+':
            cout<<"Sum = "<<Add(x,y);
            break;
        case '-':
            cout<<"Difference = "<<Sub(x,y);
            break;
        case '*':
            cout<<"Product = "<<Mul(x,y);
            break;
        case '/':
            cout<<"Quotient = "<<Div(x,y);
            break;
        case '%':
            cout<<"Remainder = "<<Mod(x,y);
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;
}