#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> un;
    int arr[12] = {1,2,3,4,5,6,7,7,8,8,9,9};

    for(int i = 0; i < 12; i++){
        if(arr[i] != arr[i+1]){
            un.push_back(arr[i]);
        }
    }
    cout << "Size " << un.size() << endl;
    cout << "Capacity " << un.capacity() << endl;

    for(int i = 0; i < un.size(); i++){
        cout << un[i] << " ";
    }

}