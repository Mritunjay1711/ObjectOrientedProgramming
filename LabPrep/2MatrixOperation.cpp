#include <iostream>
using namespace std;

class Matrix
{
    int row, col, **arr;

public:
    Matrix() {}
    Matrix(int r, int c, int **ar)
    {
        row = r;
        col = c;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = ar[i][j];
            }
        }
    }
    Matrix(const Matrix &ob)
    {
        row = ob.row;
        col = ob.col;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = ob.arr[i][j];
            }
        }
    }

    Matrix operator+(Matrix ob)
    {
        Matrix temp;
        if (row == ob.row && col == ob.col)
        {
            temp.row = row;
            temp.col = col;
            temp.arr = new int *[row];
            for (int i = 0; i < row; i++)
            {
                temp.arr[i] = new int[col];
            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    temp.arr[i][j] = arr[i][j] + ob.arr[i][j];
                }
            }
        }
        else
        {
            cout << "Invalid Operation!\n";
        }
        return temp;
    }

    Matrix operator*(Matrix ob)
    {
        Matrix temp;
        temp.row = row;
        temp.col = col;
        temp.arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            temp.arr[i] = new int[col];
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                temp.arr[i][j] = 0;
            }
        }

        if (col == ob.row)
        {
            for (int i = 0; i < row; i++)
            {
                for(int j = 0; j < ob.col; j++)
                {
                    for(int k = 0; k < col; k++)
                    {
                        temp.arr[i][j] += arr[i][k]*ob.arr[k][j];
                    }
                }
            }
        }
        else
        {
            cout << "Product not possible!\n";
        }
        return temp;
    }

    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int **arr1, **arr2;
    int r, c;
    cout << "Enter the row column for matrix: ";
    cin >> r;
    cin >> c;
    arr1 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr1[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the data for arr[" << i << "][" << j << "]\n";
            cin >> arr1[i][j];
        }
    }

    Matrix ob1(r, c, arr1);
    cout << "Enter the row column for matrix: ";
    cin >> r;
    cin >> c;
    arr2 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr2[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the data for arr[" << i << "][" << j << "]\n";
            cin >> arr2[i][j];
        }
    }
    Matrix ob2(r, c, arr2), ob3, ob4;

    ob3 = ob1 + ob2;
    ob1.display();
    cout << endl;
    ob2.display();
    cout << endl;
    // ob3.display();
    ob4 = ob1 * ob2;
    cout << endl;
    ob4.display();
    return 0;
}