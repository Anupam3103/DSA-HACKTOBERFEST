#include <iostream>
using namespace std;
int binarysearch(int *a, int n, int x)
{
//  start variable denotes the starting point in an array.
//  end variable denotes the end point of array.
//  mid variable to find the mid value between them.
    int start = 0;
    int end = n - 1;
    int mid;
    while (end >= start)
    {
        mid = (start + end) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    // Input the size of the array
    int n;
    cin >> n;
    // Create an Array of N integers
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Input the value of x you want to search 
    int x;
    cin >> x;
    cout << binarysearch(a, n, x);
    delete[] a;
}
