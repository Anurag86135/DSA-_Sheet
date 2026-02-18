#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int Target){
    for(int i=0;i<n;i++){
        if(arr[i]==Target){
            return i;
        }
    }
    return -1;
}
int main(){
     int n;
      int Target;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
   
     int arr[n];
    
    cout<<"Enter the values for the array:"<<endl;

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"enter the value of Target :"<<endl;
    cin>>Target;
   
    cout<<endl;
    int result=LinearSearch(arr,n,Target);
    if(result==-1){
        cout<<"Element not found at any index";
    }
    cout<<"The element "<<Target<<" found at index "<< result <<endl;
    return 0;
}