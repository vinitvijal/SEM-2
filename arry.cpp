#include "iostream"
using namespace std;

int list(int s, int **arr){
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int **a;
    a = new int *[2];
    for (int i = 0; i < 2; i++){
        a[i] = new int[3];
    }

    a[0][0] = 2;

    list(6, a);
    return 0;
}