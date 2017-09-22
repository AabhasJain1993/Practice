#include<iostream>

using namespace std;

int count =0 ;
void findPermutations(char *arr, int start, int end, char *permuteArr, int index, int permuteArrSize) {
    if(index == permuteArrSize ) {
        count +=1;
        cout<<count<<" ";
        for(int i=0;i<permuteArrSize; i++) {
            cout<<permuteArr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    for(int i=start;i<=end;i++) {
        //Assigning character to permutation Array
        permuteArr[index] = arr[i];
        //Recursion of Array passing index + 1
        findPermutations(arr, start, end, permuteArr, index + 1, permuteArrSize);
        
    }

}


int main() {
    char arr[] = {'+','-','*'};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    char permuteArr[4];
    findPermutations(arr, 0, len-1, permuteArr, 0, 4);
    
    
    





    return 0;
}   
