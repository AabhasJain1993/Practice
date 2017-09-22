#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

/*......Find k numbers with most occurrences in the given array...........*/

struct Heap {
    int key;
    int value;
};

unordered_map<int, int> um;

void heapify(vector<int> &arr, int index, int n) {
   int left = 2*index + 1;
   int right = 2*index + 2;
   int minIndex = index;
    
    if(um[arr[left]]>um[arr[minIndex]] && left < n) {
        minIndex = left;
    }

    if(um[arr[right]]>um[arr[minIndex]] && right < n) {
        minIndex = right;
    }
    
    if(minIndex != index) {
        int temp = arr[minIndex];
        arr[minIndex] = arr[index];
        arr[index] = temp;
        heapify(arr, minIndex, n);   
    }
}

void print_N_mostFrequentNumber(int *arr,int n,int k) {
   

   vector<int> vc;
   for(int i=0; i<n; i++) {
        um[arr[i]] +=1;
   }
   cout<<"Iterating over Map : "<<endl;
   int count = 0;
  for(auto it = um.begin();it != um.end();it++) {
    cout<<it->first <<" : "<<it->second;
    //appending elements in vector
    vc.push_back(it->first);
    cout<<endl;
  }
  
   cout<<"Vector List : ";   
   for(int i=0;i<vc.size();i++) {
    cout<<vc[i]<<" ";
    }
    
    cout<<endl;
   
   int N = vc.size();
   
   for(int i=N/2 - 1;i>=0;i--) {
       heapify(vc, i, N);
   
   }
   
   cout<<"Heapified Vector List : ";   
   for(int i=0;i<vc.size();i++) {
    cout<<vc[i]<<" ";
    }
   cout<<endl;
   
   cout<<"Most frequent Characters : ";
   
   for(int i=1;i<=k;i++) {
    cout<<vc[i-1]<<" ";
    vc[0]=vc[N-1];
    N = N-1;
   }
   
   cout<<endl;
}


int main() {

    int arr[] = {2, 1, 4, 4, 5, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    print_N_mostFrequentNumber(arr, n, k);

    return 0;
}   
