// Write a program in C++ that reads some text entered through the keyboard till the end of 
// file (eof) character is entered. The words in the text are written to different text files as per 
// the following conditions:
// • The words beginning with any of the lowercase vowels (a, e, i, o, u) are written to 
// a file fileV.txt. • The words beginning with a digit (0 – 9) are written to a file fileD.txt. • All other words are written to a file fileRest.txt


#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string word;
    ofstream foutV("fileV.txt");
    ofstream foutD("fileD.txt");
    ofstream foutR("fileRest.txt");
    cout << "Enter Your Words (To End - eof)" << endl;
    while(true){
        cin >> word;
        if(word == "eof"){
            break;
        }
        if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u'){
            foutV << word << '\n';
        }else if(word[0] >= '0' && word[0] <= '9'){
            foutD << word << '\n';
        }else{
            foutR << word << '\n';
        }
    }

    foutD.close();
    foutR.close();
    foutV.close();

    ifstream finV;
    finV.open("fileV.txt"); 
    ifstream finD;
    finD.open("fileD.txt"); 
    ifstream finR;
    finR.open("fileRest.txt");    

    char text[50];
    cout << "File Data" << "\n\n";
    cout << "fileV.txt" << endl;
    while(finV){
        finV.getline(text,50);
        cout << text << endl;
    }


    cout << "fileD.txt" << endl;
    while(finD){
        finD.getline(text,50);
        cout << text << endl;
    }


    cout << "fileR.txt" << endl;
    while(finR){
        finR.getline(text,50);
        cout << text << endl;
    }
}