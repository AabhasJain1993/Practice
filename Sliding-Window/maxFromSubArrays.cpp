#include<bits/stdc++.h>

using namespace std;
/*..................Sliding Window Maximum (Maximum of all subarrays of size k) ...........*/



//Technically I need to keep track of all elements which are left of i and are greater than
//current element at point i. Those all elements are useful to me.

//In the queue elements will be in sorted decreasing order

void printKMax(int *arr, int n, int k) {
    
    deque<int> q(k);
    for(int i=0; i<k; i++) {
        
        if(i==0) {
            q.push_back(i);
        } else {
            while(!q.empty() && arr[i]>=arr[q.back()]) {
                q.pop_back();
            }
            q.push_back(i);
        }
    }
    
    
    for(int i=k; i<n; i++) {
        
        cout<<arr[q.front()]<<" ";
  
        while(!q.empty() && q.front()<= i-k) {
            q.pop_front();
        }
        
        while(!q.empty() && arr[i]>=arr[q.back()]) {
            q.pop_back();
        }
        
        q.push_back(i);
        
    }
    
    cout<<arr[q.front()]<<" ";


}


int main()
{
    int arr[] = {12, 1, 78, 90, 57, 89, 56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for(int i=0;i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing K - max elements : ";
    printKMax(arr, n, k);
    cout<<endl;

    return 0;
}
