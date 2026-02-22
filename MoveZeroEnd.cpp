#include<iostream>
using namespace std;

void ZerToEnd(int arr[],int n){
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;

        }
    }
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
    ZerToEnd(arr,n);
    cout<<"Array after the operation :"<<endl;
    PrintArray(arr,n);

return 0;


}