// Write a program in C++ to reverse the digit of a given integer;

#include <iostream>
using namespace std;

int main(){
    int a, b = 0 ;
    cout << "Enter your number : ";
    cin >> a;
    while (a != 0){
        b = a%10 + b*10;
        a = a/10;
    }
    cout << "Reverse : " << b;
    return 0;
}
