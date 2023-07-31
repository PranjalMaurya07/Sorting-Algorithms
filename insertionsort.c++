#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int size ){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}

void traversal(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={8,7,2,11,14,6};
    int size=6;
    cout<<"Array before sorting is :"<<endl;
    traversal(arr,size);

    insertionsort(arr,size);
    
    cout<<endl<<"Array after sorting is :"<<endl;
    traversal(arr,size);
}
