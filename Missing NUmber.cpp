#include<iostream>
using namespace std;
// Consecutive numbers 
void Missing(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]>1){
            cout<<"Missing number would be :"<<arr[i]+1<<endl;
            return ;
        }
    }
    cout<<"NO missing element in the given Array"<<endl;

}
int main(){
    int arr[]={1,2,4,5};
    int n=sizeof (arr)/sizeof arr[0];
    // int arr[n]={1,2,4,5};
    Missing(arr,n);
    return 0;

}