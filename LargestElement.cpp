#include<iostream>
using namespace std;


int  Largest(int arr[],int n){
    int lar=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }

    }

    return lar;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=Largest(arr,n);
    cout<<"Largest :"<<result;
    return 0;
}