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

class Node
{
    public:
        int data;
        Node* next;

    // initializing a new node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void LinkedListTraversal(Node* root)
{
    if(root->next == NULL)
    {
        cout << "No Node Exists Currently!!!" << endl;
        return;
    }

    cout << "List : ";
    Node* temp = root->next;
    while(temp->next != NULL)
    { 
        cout << temp->data << " ";
        temp = temp->next;
    }
    // The Last Node
    cout << temp->data << endl;
}

void insert_node(Node* root, int val)
{
    Node* node = new Node(val);
    if(root->next == NULL)
    {
        root->next = node;
        return;
    }
    Node* temp = root;
    while(temp->next != NULL)
    {
        temp = temp->next;
    } 

    // adding the new node in the linked list
    temp->next = node;
}

void search_node(Node* root, int key)
{
    int counter = 1;
    Node* temp = root;

    while(temp->next != NULL)
    {
        if(temp->data == key)
        {
            cout << key << " is at node number " << counter << endl;
            return;
        }
        temp = temp->next;
        counter++;
    }

    // Searching the last element
    if(temp->data == key)
    {
        cout << key << " is at node number " << counter << endl;
           return;        
    }
    // if the loop exits without finding the data
    cout << key << " Not Found !" << endl;
}

void insert_node_beginning(Node* root, int data)
{
    Node* node = new Node(data);
    Node* temp = root->next;

    root->next = node;
    node->next = temp;
}

void insert_node_pos(Node* root, int data, int pos)
{
    int n=0;
    Node* temp = root;

    while(n!= (pos-1))
    {
        n++;
        temp = temp->next;
    }

    Node* node = new Node(data);
    node->next = temp->next;
    temp->next = node;
}

void delete_node(Node* root, int pos)
{
    int n = 0;
    Node* temp = root;

    while(n != (pos-1))
    {
        n++;
        temp = temp->next;
    }

    Node* temp2 = temp->next;
    delete temp2;
    temp->next = temp->next->next;
}

int main()
{
    inpout();
    Node* root;
    root->next = NULL; 

    // Displaying the linked list
    LinkedListTraversal(root);

    // Inserting three new nodes
    insert_node(root, 1);
    insert_node(root, 2);
    insert_node(root, 3);

    // Displaying the linked list
    LinkedListTraversal(root);

    // Searching for a value
    search_node(root, 1);
    search_node(root, 2);
    search_node(root, 4);
    search_node(root, 5);

    // Insert node in the beginning 
    insert_node_beginning(root, 0);
    insert_node_beginning(root, -1);
    insert_node_beginning(root, -2);


    // Displaying linked list
    LinkedListTraversal(root);


    // Deleting node
    delete_node(root, 2);

    // Displaying linked list
    LinkedListTraversal(root);


    // inserting node at a position
    insert_node_pos(root, 2, 2);

    
    // Displaying linked list
    LinkedListTraversal(root);
}