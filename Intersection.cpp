#include<iostream>
using namespace std;
// Only for sorted Arrays
void intersection(int arr1[], int arr2[],int n1, int n2){
    int i=0,j=0;
    cout<<"Intersection: { ";

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<< ' ';
            i++;
            j++;
        }
    }
    cout<<"}";
}

int main(){

    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,6,8};

        int n1=sizeof(arr1)/sizeof(arr1[0]);
        int n2=sizeof(arr1)/sizeof(arr1[0]);
    intersection(arr1,arr2,n1,n2);
    return 0;

}