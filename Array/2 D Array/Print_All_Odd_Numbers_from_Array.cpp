//Print All Odd Numbers from Array
#include <iostream>
using namespace std;

int main()
{
int a[50], n;

cout << "Enter number of elements: ";

cin >> n;

cout << "Enter elements:\n";
for(int i = 0; i < n; i++)
cin >> a[i];

cout << "Odd numbers in array:\n";
for(int i = 0; i < n; i++)
{
if(a[i] % 2 != 0)
cout << a[i] << " ";
}
return 0;
}

//output:
//Enter number of elements: 8
//Enter elements:
// 3 2 1 5 4 9 8 7
//Odd numbers in array:
//3 1 5 9 7
