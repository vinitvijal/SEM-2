// area of circle and perimeter of circle by functions

#include <iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}

float perimeter(float r){
    return 2*3.14*r;
}

int main(){
    float r;
    cout << "Enter Radius : ";
    cin >> r;
    cout << "Area = " << area(r) << endl;
    cout << "Perimeter = " << perimeter(r) << endl;
}

