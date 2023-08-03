#include <iostream>
using namespace std;
class base1 {
    public:
         void print(){
            cout << "Print - Base" << endl;
        }
        void show(){
            cout << "Show - Base" << endl;
        }
};


class der : public base1 {
    public:
        void print(){
            cout << "Print - Derv" << endl;
        }
        void show(){
            cout << "Show - Derv" << endl;
        }

};


int main(){
    base1 *ptr;
    der x;
    ptr = &x;
    ptr->print();
    ptr->show();
}