// Write a program to merge two arrays 
#include <iostream>
using namespace std;

int bubblesort(int a[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    return 0;
}


int main(){
    int m,n;
    cout << "Enter the size of first array : ";
    cin >> m;
    cout << "Enter the size of second array : ";
    cin >> n;
    int a[m], b[n];
    cout << "Enter the elements of first array : ";
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    cout << "Enter the elements of second array : ";
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int c[m+n];
    for (int i = 0; i < m; i++){
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        c[m+i] = b[i];
    }

    cout << "The merged array is : ";
    for (int i = 0; i < m+n; i++){
        cout << c[i] << " ";
    }

    bubblesort(c, m+n);

    cout << "The sorted merged array is : ";
    for (int i = 0; i < m+n; i++){
        cout << c[i] << " ";
    }
    cout << endl;


}