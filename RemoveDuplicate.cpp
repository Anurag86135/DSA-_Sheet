#include<iostream>
using namespace std;

int RemoveDuplicate(int arr[],int n){
    if(n==0)return 0;
    int j=0;

    for(int i=1;i<n;i++){
        if(arr[j]!=arr[i]){
              j++;
            arr[j]=arr[i];
          
        }
    }
    return j+1;
}

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){

    cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array before the operation :"<<endl;
    PrintArray(arr,n);
    int newSize=RemoveDuplicate(arr,n);
    cout<<"Array after the operation :"<<endl;
    PrintArray(arr,newSize);

return 0;
}

