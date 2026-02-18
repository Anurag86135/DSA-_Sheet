#include<iostream>
using namespace std;

int MaxOnes(int arr[],int n){
    int count=0;
    int MaxCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            MaxCount=max(MaxCount,count);
        }else{
            count=0;
        }

    }
    return MaxCount;



}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=MaxOnes(arr,n);
    cout<<"Maximun Consecutive Ones are :"<<result;
    return 0;
}