#include<iostream>

using namespace std;

/* Sort an array in wave form  arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..  */
void swap(int *input1, int* input2) {
    int temp;
    temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}

void sortinWave(int *arr, int n ) {
    for(int i =0; i<n ;i+=2) {
        if(i>0 && arr[i] < arr[i-1]) 
            swap(&arr[i], &arr[i-1]);
            
        if(i<n && arr[i] < arr[i+1]) {
            swap(&arr[i], &arr[i+1]);
        }    
    }
}

int main() {
    int arr[] ={10, 5, 6, 3, 2, 20, 100, 80};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<< "Input Array : ";
    for(int i=0;i<size ;i++) {
        cout<<arr[i]<< " ";
    }
    sortinWave(arr, size);
    cout<<"\n Output Array : ";
    for(int i=0;i<size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<"\n";


    return 0;
}
