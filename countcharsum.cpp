// Dictionary of saving count of every character

#include <iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;



int main(){
    string s;
    getline(cin, s);

    map<char,int> dic;
    for(int i=0; i < s.length(); i++){
        dic[s[i]]++;
    }

    for (auto i : dic)
        cout << i.first << " \t\t " << i.second << endl;

    return 0;

  
}