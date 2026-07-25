//Merge Two Arrays into Third Array
#include <iostream>
using namespace std;

int main()
{
int first[50], second[50], third[100], n;

cout << "Enter number of elements: ";
cin >> n;

cout << "Enter elements of first array:\n";
for(int i = 0; i < n; i++)
cin >> first[i];

cout << "Enter elements of second array:\n";
for(int i = 0; i < n; i++)
cin >> second[i];

for(int i = 0; i < n; i++)
third[i] = first[i];

for(int i = 0; i < n; i++)
third[i + n] = second[i];

cout << "Merged array:\n";
for(int i = 0; i < n * 2; i++)
cout << third[i] << " ";

return 0;
}

//output:
//Enter number of elements: 5
//Enter elements of first array:
//2 3 5 8 7
//Enter elements of second array:
//9 4 1 6 10
//Merged array:
//2 3 5 8 7 9 4 1 6 10
