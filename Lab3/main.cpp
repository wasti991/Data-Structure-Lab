#include <iostream>
using namespace std;

int main() {
    int a[5][5], b[5][6], c[5][6], trans[6][5];

    cout << "Enter the elements of 1st Array (5x5): " << endl;

    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
                {
                    cin >> a[i][j];
                }
        }
    cout << "Enter the elements of 2nd Array (5x6): " << endl;

    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cin >> b[i][j];
            }
        }
    cout << "Array after Multiplication (5x6): " << endl;

    // Matrix multiplication logic
    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                c[i][j] = 0;  // Initialize c[i][j] to 0
            for (int k = 0; k < 5; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << "\t" << c[i][j];
            }
            cout << endl;
        }

    // Transpose of the result matrix
    cout << "Transpose Matrix (6x5):" << endl;
    for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                trans[i][j] = c[j][i];
                cout << "\t" << trans[i][j];
            }
        cout << endl;
        }

    return 0;
}
