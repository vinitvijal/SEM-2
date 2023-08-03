#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // ofstream outfile("/Users/vinitvijal/Documents/SSCBS/Kirti Mam/input.txt");

    // cout << "Enter Name : ";
    // string name;
    // int a;
    // getline(cin, name);

    // outfile << name << "\n";
    // cin >> a ;
    // outfile << a << '\n';
    // outfile.close();
    // string line;
    // ifstream infile;
    // infile.open("/Users/vinitvijal/Documents/SSCBS/Kirti Mam/input.txt");
    // while (infile){
    //     infile.getline(line, 100);
    // }

    ofstream fout;
    fout.open("Python");
    fout << "Hola Mola Chola \n I love mangoes";
    fout.close();

    ifstream fin;
    fin.open("Python");
    char line[80];
    while(fin){
        fin.getline(line, 80);
        cout << line << endl;
    }



}