#include<iostream>
using namespace std;
int main(){
    int a[2][2], b[2][2], c[2][2], m[2][2];
    cout<<"Enter elements of first matrix (2x2): "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix (2x2): "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>b[i][j];
        }
    }
    cout<<"Sum of the two matrices: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Product of the two matrices: "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            m[i][j] = 0;
            for(int k=0; k<2; k++){
                m[i][j] += a[i][k] * b[k][j];
            }
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}