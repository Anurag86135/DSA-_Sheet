#include<iostream>
using namespace std;

void LeftRotate(int arr[], int n,int k ){

    k=k%n;
    int temp[k];

    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }

}
int main(){
int n;
int k;

cout<<"enter the size of array :"<<endl;
cin>>n;
int arr[n];




cout<<"Enter the elements of the array : "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the value of k :"<<endl;
cin>>k;

cout<<"Original array :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

LeftRotate(arr,n,k);
cout<<"Array after left rotate by " <<k<<" positions: ";
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

}
