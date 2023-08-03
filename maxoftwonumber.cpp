#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    
    if (a >= b){
        cout << a << " is Larger" << endl;
    }else{
        cout << b << " is Larger" << endl;
    }
}