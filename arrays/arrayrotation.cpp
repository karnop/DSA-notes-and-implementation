//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
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

void arr_rotation(int* arr, int rotation, int size)
{
    int temp[size] = {0};
    for(int i=0; i<size; i++)
    {
        int pos = i-rotation;
        if(pos>=0)
        {
            temp[pos] = arr[i];
        }
        else
        {
            pos = pos+size;
            temp[pos] = arr[i];
        }
    }

    for(int i=0; i<size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    inpout();
    int size; cin >> size;
    int arr[size];

    int rotation; cin >> rotation;

    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    arr_rotation(arr, rotation, size);
    
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}