// write a program to calculate GCD.
#include <iostream>
using namespace std;


int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a%b);
}


int main(){
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;


    cout << "GCD of "<<a<<" and "<<b<<" by Recursion : "<< gcd(a,b) << endl;
    cout << "LCM of "<<a<<" and "<<b<<" by Recursion : "<< (a*b)/gcd(a,b) << endl;
    return 0;
}