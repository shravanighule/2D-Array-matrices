#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA;
    cout << "Enter the number of rows for Matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> colsA;

    if(rowsA != colsA){
        cout << "Diagonal sum calculation is only possible for square matrices." << endl;
        return 1;
    }

    int A[rowsA][colsA];
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }

    int diagonalSum = 0;
    for (int i = 0; i < rowsA; i++) {
        diagonalSum += A[i][i];
    }

    cout << "Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Diagonal Sum: " << diagonalSum << endl;
    
    int reverseDiagonalSum = 0;
    for (int i = 0; i < rowsA; i++) {
        reverseDiagonalSum += A[i][colsA - 1 - i];
    }

    cout << "Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Reverse Diagonal Sum: " << reverseDiagonalSum << endl;
    return 0;
}

/*Output
Enter the number of rows for Matrix A: 2
Enter the number of columns for Matrix A: 2
Enter elements of Matrix A:
1
2
3
4
Matrix A:
1 2 
3 4 
Diagonal Sum: 5
Matrix A:
1 2 
3 4 
Reverse Diagonal Sum: 5*/
