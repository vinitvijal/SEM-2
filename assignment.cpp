//  Given two arrays of integers A and B of sizes M and N respectively.
// Write a function named MIX () with four arguments, which will produce a third array named C.
// such that the following sequence is followed.
// All even numbers of A from left to right are copied into C from left to right.
// All odd numbers of A from left to right are copied into C from right to left.
// All even numbers of B from left to right are copied into C from left to right.
// All old numbers of B from left to right are copied into C from right to left.
// A, B and C are passed as arguments to MIX (). e.g., A is {3, 2, 1, 7, 6, 3} and B is {9, 3, 5, 6, 2, 8, 10} the resultant array C is {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}


#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter the size of array A: ";
    cin >> m;
    cout << "Enter the size of array B: ";
    cin >> n;
    int a[m], b[n], c[m+n];
    int count = 0;
    cout << "Enter the elements of array A: ";
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    cout << "Enter the elements of array B: ";
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    for(int i=0; i < m; i++){
        if(a[i]%2 == 0){
            c[count] = a[i];
            count++;
        }
    }

    for(int i=0; i < n; i++){
        if(b[i]%2 == 0){
            c[count] = b[i];
            count++;
        }

    }

    for(int i=0; i < n; i++){
        if(b[i]%2 != 0){
            c[count] = b[i];
            count++;
        }
    }



    for(int i=0; i < m; i++){
        if(a[i]%2 != 0){
            c[count] = a[i];
            count++;
        }
    }



    cout << "The resultant array C is: ";
    for(int i=0; i<m+n; i++){
        cout << c[i] << " ";
    }
    return 0;
}
