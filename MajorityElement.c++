#include<iostream>
using namespace std;

// int majority(int arr[],int n){

//     for(int i=0;i<n;i++){
//         int count=0;

//         for(int j=0;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             return (arr[i]);
//         }
//     }
//     return -1;
// }


int majority(int arr[],int n){
    int candidate=arr[0];
    int count =1;

    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }else{
            count--;
            
        }
        if(count==0){
            candidate=arr[i];
            count=1;
        }

    }
    int freq=0;
   for(int i=0;i<n;i++){
    if(arr[i]==candidate){
        freq++;
    }
}

    if(freq>n/2)
        return candidate;
    return -1;
    
   
}

int main(){

    int arr[]={1,1,2,2,2,2,3,3,3,3,3,3,3,3};
    int n= sizeof (arr)/sizeof(arr[0]);
    int result= majority(arr,n);
    cout<<result;
    return 0;
}