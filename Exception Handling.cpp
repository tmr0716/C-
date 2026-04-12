#include<iostream>
using namespace std;
int main(){
   int n, d, result;
   cout<<"Enter numerator: ";
   cin>>n;
   cout<<"Enter denominator: ";
   cin>>d;
   try{
        if (d == 0){
            throw d;
        }
        result = n / d;
        cout<<"Result = "<<result<<endl;
   }
   catch(int d){
        cout<<"Error: Division by zero is not allowed!"<<endl;
   }
}