#include<iostream>
using namespace std;
// Find out the missing one from arrays of nomal values

int RandomMissing(int arr[],int arrLength,int n){
    int xorArray=0;
    int xorFull=0;

    //XOR all elements of the array
    for(int i=0;i<arrLength;i++){
        xorArray^=arr[i];
    }

    // XOR all numbers from 1 to n;
    for( int i=1;i<=n;i++){
        xorFull^=i;
    }
    return (xorFull ^ xorArray);

}
int main(){
    int n=9;
    int arr[]={4, 7, 1, 9, 2, 6, 5, 8};
    int arrLength=sizeof(arr)/sizeof arr[0];

    int result=RandomMissing(arr,arrLength,n);
    cout<<"Missing number :"<<result;
    return 0;

}