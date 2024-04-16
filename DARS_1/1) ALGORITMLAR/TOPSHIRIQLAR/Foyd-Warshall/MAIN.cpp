#include <iostream>

using namespace std;

void merge(int a[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = a[q + 1 + j];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - Son = ";
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    cout << "Saralangan massif: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}