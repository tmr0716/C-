#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num <= 1) return false;
    for(int i=2; i<=num/2; i++){
        if(num % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number.";
    }else{
        cout<<n<<" is not a prime number.";
    }
    return 0;
}