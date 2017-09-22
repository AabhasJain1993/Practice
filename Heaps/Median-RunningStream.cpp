#include<bits/stdc++.h>

using namespace std;

void calculate_median(double val, double &median) {



}

/* Median of Stream of Running Integers using STL */    

int main() {

    double arr[] = {5, 15, 10, 20, 3};
    double median = 0;//stores the median 
     
    // size of stream
    int n = 5;
     
    // reading elements of stream one by one
    for (int i=0; i < n; i++)
    {   
        // calculating new median for each 
        // new element added to the stream
        calculate_median(arr[i], median);
        cout << setprecision(1) << fixed << median << "n";
    }

    return 0;
}
