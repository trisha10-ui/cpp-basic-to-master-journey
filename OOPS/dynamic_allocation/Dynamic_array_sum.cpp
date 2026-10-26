//Dynamic array sum 
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    // Dynamic memory allocation
    int *arr = new int[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum = " << sum << endl;
    // Free memory
    delete[] arr;
    arr = 0;
    return 0;
}
