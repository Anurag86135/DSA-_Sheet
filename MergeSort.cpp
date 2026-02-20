#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1=mid-left+1; // size of left half
    int n2=right-mid; //  size of right half

    //Create temperoray arrays
    int L[n1],R[n2];

    //Copy data to temp arrays L[] and R[]
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    //Merge the data to temp arrays back into arr[left..right]
    int i=0;//intial index of left subarray
    int j=0;//intial index of right subarray
    int k=left;// Intial index of merged array

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] =L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    //copy remaining elements of l[],if any
    while (i <n1){
        arr[k] =L[i];
        i++;
        k++;

}
    while(j< n2){
        arr[k] = R[j];
        j++;
        k++;

    }
}
    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<< " ";
        }
    }

    // Function to implement merge sort
    void mergeSort(int arr[],int left, int right){
        if(left<right){
            int mid =left+(right-left)/2; //Find mid point 
            //sort first half
            mergeSort(arr,left,mid);

            //merge sort second half
            mergeSort(arr,mid+1,right);
            //merge the sorted halves 
            merge(arr,left,mid,right);
        }
    }

    int main(){
        int arr[]={22,12,30,46,28,14,8,10,56,18,3};
        int n=sizeof (arr)/sizeof (arr[1]);

        cout<<"Original Array: ";
        printArray(arr,n);

        mergeSort(arr,0,n-1);
        cout<<endl;

        cout<<"Sorted Array :";
        printArray(arr,n);

        return 0;

    }
    







https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1