// check prime in main function only

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i;
    for(i = 2; i < n; i++){
        if (n%i == 0){
            cout << "Not Prime" << endl;
            break;
        }
    }
    if (i == n){
        cout << "Prime" << endl;
    }
}
