// Write a program in C++ that provides a user-defined class NewFloat with a data member 
// floatData of type float. The class also comprises the following members: • default and parameterized constructors • an inline member function printData() that prints the details of an object of 
// the class
// • a member function deciData() that returns the decimal part of floatData
// • operator overloading to perform the following operations:
// ▪ post increment (++) increments floatData by 1.
// ▪ less than (<) on a pair of objects of the class. The function returns 1 if the 
// data member of the object on the LHS of the operator is less than the data 
// member of the object on the RHS of the operator and 0 otherwise. ▪ int cast to convert the float data member of an object into an integer

#include <iostream>
using namespace std;
class NewFloat {
    float floatData;

    public:
        NewFloat(void){
            this->floatData = 0.0;
        }
        NewFloat(float n){
            this->floatData = n;
        }
        inline void printData(){cout << floatData << endl;};

        float deciData(){
            return floatData - int(floatData);
        }

        NewFloat operator++(int){
            NewFloat temp(*this);
            floatData += 1;
            return temp;
        } 

        NewFloat& operator++(){
            floatData += 1;
            return *this;
        }

};


int main(){
    NewFloat a(5.3);
    a.printData();
    cout << a.deciData() << endl;
    a++;
    ++a;
    a.printData();
    cout << (int)5.3 ;
    
}
