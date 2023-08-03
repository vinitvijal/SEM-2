#include <iostream>
#include <string>
using namespace std;

class binary {
    string s;
    
public:
    void read (void);
    void checkBinary (void);
};

void binary :: read (void) {
    cout << "Enter a number: ";
    cin >> s;
}

void binary :: checkBinary (void) {
    for ( int i = 0; i < s.length(); i++) {
        if ( s.at(i)!= '0' && s.at(i)!= '1') {
            cout << "This is not a binary number";
            break;
          }  else {
                cout << "This is a binary number";
                break;
                
            }
        }
}

int main () {
    binary b;
    b.read();
    b.checkBinary();
    return 0;
}