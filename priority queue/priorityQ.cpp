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

void showpq(priority_queue <int> p)
{
     priority_queue<int> g = p;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    inpout();
    priority_queue <int> p;
    p.push(10);
    p.push(1000);
    p.push(100);
    p.push(10);
    p.push(50);
    p.push(20);

    cout << "Priority Queue: ";
    showpq(p);

    p.pop();
    cout << "Priority Queue: ";
    showpq(p);
}