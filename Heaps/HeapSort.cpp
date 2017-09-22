#include<bits/stdc++.h>

using namespace std;

void heapify(int *arr, int index, int n) {
    if(index >= n) {
        return;
    }
    
    int left=  2 * index + 1;
    int right = 2 * index + 2;
    int minIndex = index;
    
    if(arr[left] > arr[minIndex] && left < n) {
       minIndex = left;
    } 
    
    if(arr[right] > arr[minIndex] && right < n) {
        minIndex = right;
    }

    if(minIndex != index) {
        //Swapping values
        int temp = arr[minIndex];
        arr[minIndex] = arr[index];
        arr[index] = temp;
        heapify(arr, minIndex, n);
    }
}


void heapSort(int *arr, int n) {
    //So as to have minimum or maximum on top of array
    for(int i=n/2-1;i>=0;i--) {
        heapify(arr, i, n);
    }
    
    for(int i=n-1;i>=1;i--) {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;

        heapify(arr, 0, i);
    }
    


}

void insertInHeap(int *arr, int index) {

    int parent = (index - 1) /2 ;
    while(index != 0 && arr[parent]<arr[index] && parent >=0) {
        int temp = arr[parent];
        arr[parent] = arr[index];
        arr[index] = temp;
    }

}

int main() {

    int arr[10] = {12, 11, 13, 5, 6, 7, 0, 0, 0, 0};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    //heapSort(arr, n);
    for(int i=n/2-1;i>=0;i--) {
        heapify(arr, i, n);
    }
    
    n=7;
    arr[n-1] = 10;
    insertInHeap(arr, 7);
    
    cout<<"Heapified Array : "<<endl;
    
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    
 
   // cout << "Sorted array is \n";
    
    
   // for(int i=0;i<n;i++) {
   //     cout<<arr[i]<<" ";
   // }
   // cout<<"\n";
    
    
    
    
}
