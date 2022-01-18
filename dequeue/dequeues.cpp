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

void showdeque(deque <int> d)
{
    for(auto i=d.begin(); i!=d.end(); i++)
        cout << *i << " ";

    cout << endl;
}
int main()
{
    inpout();

    deque <int> d;
    d.push_back(20);
    d.push_front(50);
    d.push_back(40);
    d.push_front(10);

    cout << "Deque : ";
    showdeque(d);

    cout << "popping element from the front: ";
    d.pop_front();
    showdeque(d);

    cout << "popping element from the back :";
    d.pop_back();
    showdeque(d);

    

}
