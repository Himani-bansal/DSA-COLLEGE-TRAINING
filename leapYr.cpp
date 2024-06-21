#include <iostream>
using namespace std;

int main(){
    int yr;
    cout<<"Enter the year"<<endl;
    cin>>yr;

    if((yr%4==0 && yr%100!=0) || (yr%400==0 && yr%2000!=0)){
cout<<"Leap year";
    }
    else{
        cout<<"Not Leap year";
    }

 
    
}