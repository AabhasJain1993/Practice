#include<iostream>

using namespace std;

void insertSort(int *arr, int N) {

    int key;
    int j;
    for(int i=1; i < N; i++) {
        key = arr[i];
         j = i-1;
         
         while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j = j-1;
         }
         arr[j+1] = key;
    }
}


int main() {

    int arr[] = {11, 5, 1, 34, 23, 354, 4, 6 , 8, 34, 33, 21};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertSort(arr, n);
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
