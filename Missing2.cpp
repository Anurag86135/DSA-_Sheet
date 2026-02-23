#include<iostream>
using namespace std;
// missing number among natural numbers
int MissingNatural(int arr[],int n){
    int total=(n+1)*(n+2)/2;
    int ArrSum=0;
    for(int i=0;i<n;i++){
        ArrSum+=arr[i];

    }
    return (total-ArrSum);
    
}
int main(){
    int arr[]={1,2,3,5};
    int n=sizeof (arr)/sizeof arr[0];
    int result= MissingNatural(arr,n);
    cout<<"Missing number :"<<result;
    return 0;

}