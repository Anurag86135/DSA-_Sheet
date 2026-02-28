#include<iostream>
using namespace std;

int majority(int arr[],int n){

    for(int i=0;i<n;i++){
        int count=0;

        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>n/2){
            return (arr[i]);
        }
    }
    return -1;
}

int main(){

    int arr[]={1,1,2,2,2,2,2,3,3};
    int n= sizeof (arr)/sizeof(arr[0]);
    int result= majority(arr,n);
    cout<<result;
    return 0;
}