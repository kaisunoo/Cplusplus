/*Learning Task - Sorting in Data Structures and Algorithm (DSA)
Españo, Kyla Caryl B.*/

/*Write a C++ program that will sort the sequence 3, 10, 4, 1, 5, 9, 2, 6, 5 using:
a.)selection sort     b.)bubble sort     and c.) insertion sort
Sample Output:
Input: 3, 10, 4, 1, 5, 9, 2, 6, 5
Operations to use:   1 -selection sort       2- bubble sort          3- insertion sort (only select 1 operation)
Output: 3, 10, 4, 1, 5, 9, 2, 6, 5*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, P, min;
    //Array of random numbers to be sorted.
    int arr[9] = {3, 10, 4, 1, 5, 9, 2, 6, 5};
    int operation;
    //To display the array.
    cout << "Sort this sequence:\n";
    for(i = 0; i < 9; i++) {
        cout << arr[i] << "\t";
    }
    //Selection of operations to be used.
    cout << "\n\nPlease select one operation to use:\n";
    cout << "1 - Selection Sort   2 - Bubble Sort   3- Insertion Sort\n";
    cin >> operation;

//Switch case for the three different operations.
switch (operation) {
//Selection Sort
  case 1:
      for(i = 0; i < 9 - 1; i++)
      {
          min = arr[i];
          P = i;
          for(j = i + 1; j < 9; j++)
          {
              if(min > arr[j])
              {
                  min = arr[j];
                  P = j;
              }
          }
          temp = arr[i];
          arr[i] = arr[P];
          arr[P] = temp;
      }
    cout << "\nSelection Sort:\n";
    for(i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t";
    }
    break;
//Bubble Sort
  case 2:
      for(i = 0; i < 9; i++)
      {
          for(j = i + 1; j < 9; j++)
          {
              if(arr[j] < arr[i])
              {
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
              }
          }
      }
    cout << "\nBubble Sort:\n";
    for(i = 0; i < 9; i++)
        {
            cout << arr[i] << "\t";
        }
    break;
//Insertion Sort
  case 3:
      for(i = 0; i <= 9 - 1; i++)
      {
          temp = arr[i];
          j = i - 1;
          while((temp < arr[j]) && (j >= 0))
          {
              arr[j + 1] = arr[j];
              j = j -1;
          }
          arr[j + 1] = temp;
      }
    cout << "\nInsertion Sort\n";
    for(i = 0; i < 9; i++)
    {
        cout << arr[i] << "\t";
    }
    break;
/*Included a default case if ever the user inputs a
number that is not inluded in the selection.*/
  default:
    cout << "\nInvalid input!";
}
}
