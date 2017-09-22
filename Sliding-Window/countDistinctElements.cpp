#include<bits/stdc++.h>

using namespace std;

void printDistinctElements(int *arr, int n, int k) {
    
    unordered_map<int> um;
    
    for(int i=0;i<k;i++) {
        
        if(i==0) {
            q.push_back(i);
        } else {
            while(!q.empty() && arr[i])
        
        }
        
    
    }





}

int main() {
    
    int arr[] = {1, 2, 1, 3, 4, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    for(int i=0;i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Couting Distinct Elements : ";
    printDistinctElements(arr, n, k);
    cout<<endl;
    
   return 0;
}
