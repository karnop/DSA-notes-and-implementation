#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

void inpout()
{
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    inpout();

    int n;
    cin >> n;

    int rows = n;
    int cols = n;
    
    int matrix[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            int var;
            cin >> var;
            matrix[i][j] = var;
        }
    }

    cout << "Matrix : " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // TODO: Transposing the Matrix
    int transposed_matrix[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            transposed_matrix[i][j] = matrix[j][i];
        }
    }

    cout << "Transposed Matrix : " << endl;
     for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout <<transposed_matrix[i][j] << " ";
        }
        cout << endl;
    }

    // TODO: Multiplying both the matrices
    int mult_matrix[rows][cols];
     for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            int sum = 0;
            for(int k=0; k<n; k++)
            {
                sum = sum + (matrix[i][k]*transposed_matrix[k][j]); 
            }
            mult_matrix[i][j] = sum;
        }
    }

    cout << "Multiplying above two matrices : " << endl;
     for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << mult_matrix[i][j] << " ";
        }
        cout << endl;
    }

}