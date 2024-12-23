#include <iostream>
using namespace std;

class Matrix {
public:
    void operate(int a[3][3], int b[3][3]) {
        int result[3][3];
        cout << "Matrix Addition:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = a[i][j] + b[i][j];
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    void operate(int a[3][3], int b[3][3], bool multiply) {
        int result[3][3] = {0};
        cout << "Matrix Multiplication:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int a[3][3], b[3][3];
    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    Matrix m;
    m.operate(a, b);     
    m.operate(a, b, true);  
    return 0;
}
