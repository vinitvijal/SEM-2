// Create a Matrix class. Write a menu-driven program to perform following Matrix operations (exceptions should be thrown by the functions if matrices passed to them are incompatible and handled by the main() function):
// Sum 
// Product 
// Transpose 


#include <iostream>
using namespace std;

class Matrix{
    int **mat;
    int rows, cols;
    public:
        Matrix(int r, int c){
            rows = r;
            cols = c;
            mat = new int*[rows];
            for (int i = 0; i < rows; i++){
                mat[i] = new int[cols];
            }
        }
        void input(){
            cout << "Enter Matrix Elements : " << endl;
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++){
                    cin >> mat[i][j];
                }
            }
        }
        void display(){
            cout << "Matrix is : " << endl;
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++){
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }
        Matrix operator+(Matrix m){
            if (rows != m.rows || cols != m.cols){
                throw "Matrices are not compatible for addition";
            }
            Matrix temp(rows, cols);
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++){
                    temp.mat[i][j] = mat[i][j] + m.mat[i][j];
                }
            }
            return temp;
        }
        Matrix operator*(Matrix m){
            if (cols != m.rows){
                throw "Matrices are not compatible for multiplication";
            }
            Matrix temp(rows, m.cols);

            for (int i = 0; i < rows; i++){
                for (int j = 0; j < m.cols; j++){
                    temp.mat[i][j] = 0;
                    for (int k = 0; k < cols; k++){
                        temp.mat[i][j] += mat[i][k] * m.mat[k][j];
                    }
                }
            }

            return temp;
        }
        Matrix transpose(){
            Matrix temp(cols, rows);
            for (int i = 0; i < cols; i++){
                for (int j = 0; j < rows; j++){
                    temp.mat[i][j] = mat[j][i];
                }
            }
            return temp;
        }
};


int main(){
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix : ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix : ";
    cin >> r2 >> c2;
    Matrix m1(r1, c1), m2(r2, c2);
    m1.input();
    m2.input();
    try{
        Matrix m3 = m1 + m2;
        m3.display();
    }
    catch(const char *s){
        cout << s << endl;
    }

    try{
        Matrix m4 = m1 * m2;
        m4.display();
    }
    catch(const char *s){
        cout << s << endl;
    }
    Matrix m5 = m1.transpose();
    m5.display();
    return 0;
}
