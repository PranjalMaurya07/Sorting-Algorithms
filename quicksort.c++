#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[(low+high)/2];
    int i=low;
    int j=high;
    while(i<j){
        while (arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],pivot);
    return j;
}

void quicksort(int arr[],int low,int high){
    if(low >= high){
        return;
    }
    int pivot=partition(arr,low,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
}

void traversal(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={8,7,2,11,14,6};
    int size=6;
    int low=0;
    int high=size-1;
    cout<<"Array before sorting is :"<<endl;
    traversal(arr,size);

    quicksort(arr,low,high);
    
    cout<<endl<<"Array after sorting is :"<<endl;
    traversal(arr,size);
}