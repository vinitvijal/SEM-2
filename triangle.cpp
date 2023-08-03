// Create a Triangle class.  Add exception handling statements to ensure the following conditions: all sides are greater than 0 and sum of any two sides is greater than the third side.   The class should also have overloaded functions for calculating the area of a right angled triangle as well as using Heron's formula to calculate the area of any type of triangle.

#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    private:
        float a,b,c;
    public:
        Triangle(float x, float y, float z){
            a = x;
            b = y;
            c = z;
        }
        float area(){
            float s = (a+b+c)/2;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }
        float area(float x, float y){
            return (x*y)/2;
        }
        float geta(){
            return a;
        }
        float getb(){
            return b;
        }
        float getc(){
            return c;
        }
};


int main(){
    float a,b,c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    try{
        if(a <= 0 || b <= 0 || c <= 0){
            throw 1;
        }
        if(a+b <= c || b+c <= a || a+c <= b){
            throw 2;
        }
    }catch(int x){
        if(x == 1){
            cout << "Sides cannot be less than or equal to 0" << endl;
            return 0;
        }
        if(x == 2){
            cout << "Sum of any two sides cannot be less than or equal to the third side" << endl;
            return 0;
        }
    }
    Triangle t(a,b,c);
    cout << "Area of the triangle is: " << t.area() << endl;
    if(t.geta()*t.geta() + t.getb()*t.getb() == t.getc()*t.getc() || t.geta()*t.geta() + t.getc()*t.getc() == t.getb()*t.getb() || t.getb()*t.getb() + t.getc()*t.getc() == t.geta()*t.geta()){
        cout << "Area of the right angled triangle is: " << t.area(t.geta(), t.getb()) << endl;
    }
    return 0;
}