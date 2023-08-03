// linear search

#include <iostream>


using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k;
    cout << "Enter Number to Search : ";
    cin >> k;
    int flag = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] == k){
            cout << "Found at " << i << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "Not Found" << endl;
    }
    
}