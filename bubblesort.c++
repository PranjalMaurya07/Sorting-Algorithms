#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int size ){
    for(int i=0;i<size-1;i++){
        bool swapped=false;
        for(int j=0;j<size-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false){
            break;
        }
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

    bubblesort(arr,size);
    
    cout<<endl<<"Array after sorting is :"<<endl;
    traversal(arr,size);
}
