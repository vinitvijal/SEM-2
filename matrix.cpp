#include <iostream>
using namespace std;

class matrix{
    // method sum  product transpose
    // method to print
    // method to take input
    // method to add
    // method to multiply

    int **arr;
    int rows;
    int cols;
    public:
    matrix(int r, int c){
        this->rows = r;
        this->cols = c;
        arr = new int* [rows] ;
        for(int i=0; i < rows; i++){
            arr[i] = new int[cols];
        }
    }

    void input(){
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                cin >> arr[i][j];
            }
        }
    }

    void print(){
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    matrix add(matrix m){
        matrix res(rows,cols);
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                res.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return res;
    }

    matrix multiply(matrix m){
        m = m.transpose();
        matrix res(rows,m.cols);
        for(int i=0; i < rows; i++){
            for(int j=0; j < m.cols; j++){
                res.arr[i][j] = 0;
                for(int k=0; k < cols; k++){
                    res.arr[i][j] += arr[i][k] * m.arr[k][j];
                }
            }
        }
        return res.transpose();
    }

    matrix transpose(){
        matrix res(cols,rows);
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                res.arr[j][i] = arr[i][j];
            }
        }
        return res;}
};

int main(){
    matrix m1(4,4);
    matrix m2(4,4); 
    m1.input();
    m2.input();
    matrix m3 = m1.add(m2);
    cout << "\n\n";

    m3.print();
    cout << "\n\n";
    matrix m4 = m1.multiply(m2);
    m4.print();
    cout << "\n\n";

    matrix m5 = m1.transpose();
    m5.print();
    return 0;

}
