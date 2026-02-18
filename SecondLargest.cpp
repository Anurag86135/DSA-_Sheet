#include<iostream>
using namespace std;

int SecondLargest(int arr[],int n,int largest,int SecLargest){
    
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            SecLargest=largest;
            largest=arr[i];
        }
        else if( arr[i]<largest && arr[i] && arr[i]>SecLargest){
            SecLargest=arr[i];
        }
    }
    return SecLargest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        
    }
    int largest=arr[0];
    int SecLargest=arr[0];

    int result=SecondLargest(arr,n,largest,SecLargest);
    cout<<"Second Largest element in the array is :"<<result;
    return 0;
}