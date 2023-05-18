#include <iostream>
#include <conio.h>
#include <malloc.h>

using namespace std;
struct node {
     struct node *next;
     int data;
} first, *nw, *start, *temp;

void insert_front(int);
void insert_mid(int,int);
void insert_end(int);
//void display();

int main()
{
    start = NULL;
    int choice, location, element, position, no, i;
    //first.next = NULL;
    nw =& first;
        cout << "[1] Inserting new node at the front\n";
        cout << "[2] Inserting new node at the middle\n";
        cout << "[3] Inserting new node at the rear\n"; //4.Display linked list\n5.Exit Program.\n
        cout << "[4] Deleting node at the front\n";
        cout << "[5] Deleting node at the middle\n";
        cout << "[6] Deleting node at the last\n";
        cout << "\nTest Data and Expected Output:\n";
        again:
        cout << "\nInput the number of nodes:";
        cin >> no;


        for (i = 0; i < no; i++)
        {
            nw -> next = (struct node*)malloc(sizeof(struct node));
            cout << "Input data for node " << i + 1 << ":";
            cin >> nw -> data;
            nw = nw -> next;
        }
        nw -> next = NULL;
        cout << "\nSelect operation to be used:";
        cin >> choice;

        cout << "\nData entered in the list are:";
        nw = &first;
        for (i = 0; i < no; i++)//nw -> next != NULL
        {
            cout << "\nnode " << i + 1 << ":" << nw -> data;
            nw = nw -> next;
        }



        switch(choice)
        {
            case 1:
            cout << "\nInput data for the first node:";
            cin >> no;
            insert_front(no);
            //display();
            break;

            case 2:
            cout << "\nEnter location to insert:";
            cin >> location;
            cout << "\nInput data to insert:";
            cin >> no;
            insert_mid(no,location);
            //display();
            break;

            case 3:
            cout << "\nEnter data to insert:";
            cin >> no;
            insert_end(no);
            //display();
            break;

            case 4:
            cout << "\nInserted item=";
            //display();
            break;

            case 5:
            cout << "\nThank you";
            default: break;
        }
        return 0;
}

void insert_front(int no)
{
    struct Node *nn;
    nw = (node*)malloc(sizeof(node));
    nw -> data = no;
    nw -> next = start;
    start = nw;

    //nw = start;
    cout << "\nThe new list are:";

    while (nw != NULL)
        {
            cout << "\nnode " << ":" << nw -> data;
            nw = nw -> next;
        }
    cout << " ";
}

void insert_mid(int no, int location)
{
    nw = (node*)malloc(sizeof(node));
    nw -> data = no;
    node* current = start;
    int count = 1;
    while (count < location-1)
    {
        current = current -> next;
        count = count + 1;
    }
    nw -> next = current -> next;
    current -> next = nw;
}

void insert_end(int no)
{
    nw = (node*)malloc(sizeof(node));
    nw -> data = no;
    nw -> next = NULL;
    node* current = start;
    while (current -> next != NULL)
    {
        current = current -> next;
    }
    current -> next = nw;
}

/*void display()
{
    nw = start;
    cout << "\nThe new list are:";

    while (nw != NULL)
        {
            cout << "\nnode " << ":" << nw -> data;
            nw = nw -> next;
        }
    cout << " ";
}*/
