#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error opening input file: " << inputFileName << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error opening output file: " << outputFileName << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        if (!isspace(ch)) {
            outputFile.put(ch);
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Contents of " << inputFileName << " copied to " << outputFileName << " with whitespaces removed." << endl;

    return 0;
}