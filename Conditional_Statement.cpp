#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<x<<" is the greatest number."<<endl;
    }
    else if(y>x && y>z){
        cout<<y<<" is the greatest number."<<endl;
    }
    else{
        cout<<z<<" is the greatest number."<<endl;
    }
    int n = x+y+z;
    cout<<(n >= 100 ? "The sum is greater than or equal to 100." : "The sum is less than 100.")<<endl;
    return 0;
}