#include <iostream>

using namespace std;

void bubblesort(int A[],int n)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 1; i < n; ++i)
        {
            if (A[i - 1] > A[i])
            {
                swap(A[i - 1],A[i]);
                sorted = false;
            }
        }
        --n;
    }
}

int main()
{
    int arr[] = {5,2,7,4,6,3,1};
    bubblesort(arr,sizeof(arr)/sizeof(int));
    for (auto i :arr)
        cout << i << " ";
    cout << endl;
}
