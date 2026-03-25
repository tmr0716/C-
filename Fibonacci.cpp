#include<iostream>
using namespace std;
int main(){
    int n, a=0, b=1, next;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=0; i<n; i++){
        if(i <= 1){
            next = i;
        }else{
            next = a + b;
            a = b;
            b = next;
        }
        cout<<next<<" ";
    }
    return 0;
}