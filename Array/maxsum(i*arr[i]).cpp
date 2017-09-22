#include<iostream>

/* Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed */

using namespace std;

void findmaxsum(int *arr, int n) {
    


}

int main() {
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<< "Input Array : ";
    for(int i=0;i<size ;i++) {
        cout<<arr[i]<< " ";
    }
    findmaxsum(arr, size);
    cout<<"\n Output Array : ";
    for(int i=0;i<size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<"\n";
}
