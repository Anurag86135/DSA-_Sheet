#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minIn=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIn]){
                minIn=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIn];
        arr[minIn]=temp;
    }
}

int main(){
    int arr[]={19,233,353,44};
    int n=sizeof (arr)/sizeof (arr[0]);
    PrintArray(arr,n);
    SelectionSort(arr,n);
    cout<<endl;
    PrintArray(arr,n);

    return 0;




}