//Binary Search in Array
#include <iostream>
using namespace std;

int main()
{
int arr[50], n, x;
int first, last, mid;
bool found = false;

cout << "Enter size of array: ";
cin >> n;

cout << "Enter sorted elements:\n";
for(int i = 0; i < n; i++)
cin >> arr[i];

cout << "Enter element to search: ";
cin >> x;

first = 0;
last = n - 1;

while(first <= last)
{
mid = (first + last) / 2;

if(arr[mid] == x)
{
found = true;
break;
}
else if(x > arr[mid])
first = mid + 1;
else
last = mid - 1;
}

if(found)
cout << "Element found at position " << mid + 1;
else
cout << "Element not found";

return 0;
}

//output:
//Enter size of array: 5
//Enter sorted elements:
//1 2 3 4 5
//Enter element to search: 4
//Element found at position 4
