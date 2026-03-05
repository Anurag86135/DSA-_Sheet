#include<iostream>
using namespace std;
int rearrange(int arr[],int ans[],int n){
    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos+=2;
        }
        else{
            ans[neg]=arr[i];
            neg+=2;
        }

    }
    return arr[n];

}

void Array(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}


int main(){
    int arr[]={1,-3,-4,3,2};
    int n=sizeof (arr)/sizeof arr[0];
    int ans[n];
    int result=rearrange(arr,ans,n);
    // cout<<result;
    Array(ans,n);
    return 0;
}