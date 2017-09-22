#include<iostream>

using namespace std;

void swap(char *a, char *b) {
    char temp;
    temp= *a;
    *a = *b;
    *b = temp;
}

void findPermutations(char* arr, int start, int end) {
    if(start == end) {
        for(int i = 0; i<=end; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    for(int i = start; i<=end;i++) {
        swap(arr + start, arr + i);
        findPermutations(arr, start + 1, end);
        swap(arr + start, arr + i);
    }
    

}

int main() {
    char arr[]={'A','B', 'C', 'D'};
    int len =sizeof(arr)/sizeof(arr[0]);
    
    findPermutations(arr, 0, len-1);
    return 0;
}
