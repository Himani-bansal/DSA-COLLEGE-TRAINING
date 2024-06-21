#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=1; i<=n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==i){
            cout<<i;
        }
    }
}