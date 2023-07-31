#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int size ){
    for(int i=0;i<size;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
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

    selectionsort(arr,size);
    
    cout<<endl<<"Array after sorting is :"<<endl;
    traversal(arr,size);
}
