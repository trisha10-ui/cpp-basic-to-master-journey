#include <iostream>
using namespace std;

int main()
{
int a[5] = {10, 20, 30, 50, 90};
int b[5];

cout << "First array:\n";
for(int i = 0; i < 5; i++)
{
cout << a[i] << " ";
b[i] = a[i];
}

cout << "\nCopied second array:\n";
for(int i = 0; i < 5; i++)
cout << b[i] << " ";

return 0;
}

//output:
//First array:
//10 20 30 50 90
//Copied second array:
//10 20 30 50 90
