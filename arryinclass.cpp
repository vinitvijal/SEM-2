#include <iostream>
using namespace std;

class List{
    int **arr;
    int m, n;

    public:
        List(int n, int m){
            this->m = m;
            this->n = n;
            int arr2[n][m];
            this->arr = arr2;

        }

        


};



int main(){

    int arr[] = {1,2,3,4,5};
    List l1(arr,5);
    l1.display();

}
