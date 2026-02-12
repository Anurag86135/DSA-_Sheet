#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwap=true;
            }
           

        }
         if(!isSwap){
                return;
            }
    }

}
int main(){
    int arr[]={2,3,5,4,1};
    int n=sizeof arr/sizeof arr[0];
    printArray(arr,n);
    cout<<endl;
    Bubblesort(arr,n);
    cout<<endl;
    printArray(arr,n);

}
