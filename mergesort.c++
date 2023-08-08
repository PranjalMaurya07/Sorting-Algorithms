#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int high){
    int b[high-low+1];
    int mid=low+(high-low)/2;
    int i=low;
    int k=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    if(j<=high){
        b[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=b[i];
    }
}

void mergesort(int arr[],int low,int high){
    int mid=low+(high-low)/2;
    if(low >= high){
        return;
    }
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high);
}
void traversal(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7]={7,9,6,2,14,11,5};
    int size=7;
    int low=0;
    int high=size-1;
    cout<<"Array before sorting"<<endl;
    traversal(arr,size);
    mergesort(arr,low,high);
    cout<<"Array after sorting"<<endl;
    traversal(arr,size);
}
