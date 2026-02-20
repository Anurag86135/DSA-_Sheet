// 11.Left Rotate by one 

#include<iostream>
using namespace std;

void RotateByOne(int arr[],int n){
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}
void PrintArr(int arr[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
    }
    cout<<"}";


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    RotateByOne(arr,n);
    cout<<"After left rotated by one :"<<endl;
    
    PrintArr(arr,n);
    return 0;
}