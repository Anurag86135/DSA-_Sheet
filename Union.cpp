#include<iostream>
using namespace std;

// Union of two Arrays
void Union(int arr1[],int arr2[],int n1, int n2, int unionArray[] ){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            unionArray[k++]=arr1[i++];

        }
        else if(arr1[i]>arr2[j]){
            unionArray[k++]=arr2[j++];
        }
        else{
            unionArray[k++]=arr1[i];
            i++,j++;
    }
}
    // Copy remaining elements from arr1
    while(i< n1){
        unionArray[k++]=arr1[i++];
    }
    // copy remaining elements from arr2
    while(j<n2){
        unionArray[k++]=arr2[j++];
    }
    // Printing the union array
    cout<<"Union : {";
    for(int x=0;x<k;x++){
        cout<<unionArray[x]<<" ";
    }
    cout<<"}";



}
int main(){
    int i=0,j=0,k=0;
    int arr1[]={1,3,5,7};
    int arr2[]={2,3,6,8,9};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    int unionArray[n1+n2];
    Union(arr1,arr2,n1,n2,unionArray);

return 0;
}