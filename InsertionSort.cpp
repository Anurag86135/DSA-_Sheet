#include<iostream>
using namespace std;
void Print(int arr[],int n ){
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

void Insertion(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            j--;
        }
    }
}

int main(){
    int arr[]={2,4,3,1,5};
    int n=sizeof arr/sizeof arr[0];
    Print(arr,n);
    Insertion(arr,n);
    cout<<endl;
    Print(arr,n);
    return 0;

}