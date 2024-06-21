#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;

    for(int i=2;i<x;i++){
        if(x%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        else{
            cout<<"Prime Number";
            break;
        }

    }
}