#include<iostream>
using namespace std;

void Leader(int arr[],int n){
    int maxim=arr[n-1];
    cout<<"{";
    cout<<maxim<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxim){
            maxim=arr[i];
            cout<<maxim<<" ";
        }

    }
    cout<<"}";
}
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    Leader(arr,n);
    return 0;
}