#include<iostream>
using namespace std;

int partition(int *arr,int start,int end){

    int idx=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            idx++;
           int temp=arr[j];
           arr[j]=arr[idx];
           arr[idx]=temp;
        }

    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;



}
void quickSort(int *arr,int start,int end){
    if(start<end){
        int pivIdx=partition(arr,start,end);
        quickSort(arr,start,pivIdx-1);///left half
        quickSort(arr,pivIdx+1,end);//Right half


    }

}
int main(){
    int arr[]={5,2,6,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);

    for(int val:arr){
        cout<<val<< " ";
    }
    cout<<endl;
    return 0;
}