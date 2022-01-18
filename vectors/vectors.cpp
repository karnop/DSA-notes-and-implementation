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
    vector <int> v;

    int n;
    cin >> n;

    while(n--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cout << "Printing array in normal order : ";
    for(auto i=v.begin(); i!=v.end(); i++)
        cout << *i << " ";
    cout << endl;

    cout << "Printing array in reverse order : ";
    for(auto i=v.rbegin(); i!=v.rend(); i++)
        cout << *i << " ";
    cout << endl;

    cout << "Size : " << v.size() << endl;
    cout << "Max Size : " << v.max_size() << endl;
    cout << "Capacity : " << v.capacity() << endl << endl;

    v.shrink_to_fit();
    cout << "Size : " << v.size() << endl;
    cout << "Max Size : " << v.max_size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    
    cout << "v.front() : " << v.front() << endl;
    cout << "v.back() : " << v.back() << endl << endl;

    //filling the array with 10 five times
    cout << "filling the same array with 10 five times" << endl;
    v.assign(10, 5);
     for(auto i=v.begin(); i!=v.end(); i++)
        cout << *i << " ";
    cout << endl << endl;

    cout << " prints the vector like arrays : ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl << endl;

    cout << "Inserting 10 at beginning : ";
    v.insert(v.begin(), 10);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl << endl;
}