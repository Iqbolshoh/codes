#include <iostream>
#include <windows.h>

using namespace std;

void Func(string soz, int S, int arr[])
{
    int c = 0;
    int k = 1;
    arr[0] = 0;
    while (k < S)
    {
        if (soz[k] == soz[c])
        {
            c++;
            arr[k] = c;
            k++;
        }
        else
        {
            if (c != 0)
            {
                c = arr[c - 1];
            }
            else
            {
                arr[k] = 0;
                k++;
            }
        }
    }
}

void almash(string matn, string soz, int M, int S)
{
    string str;
    cout <<"' " <<soz << "  ' so'zini almashtirish : ";
    getline(cin, str);
    int s = str.length();
    int arr[S];
    Func(soz, S, arr);
    int k = 0, c = 0, j = 0, a[M];
    while (k < M)
    {
        if (matn[k] == soz[c])
        {
            k++;
            c++;
        }
        if (c == S)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            for (int i = 0; i < s; i++)
            {
                cout << str[i];
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            a[j] = k - c;
            c = arr[c - 1];
            j++;
        }
        else if (k < M and matn[k] != soz[c])
        {
            cout << matn[k];
            if (c != 0)
            {
                c = arr[c - 1];
            }
            else
            {
                k++;
            }
        }
    }
}

void KMP(string matn, string soz)
{
    int M = matn.length();
    int S = soz.length();
    int arr[S];
    Func(soz, S, arr);

    int k = 0, c = 0, j = 0, a[M];
    while (k < M)
    {
        if (matn[k] == soz[c])
        {
            k++;
            c++;
        }
        if (c == S)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            for (int i = 0; i < S; i++)
            {
                cout << soz[i];
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            a[j] = k - c;
            c = arr[c - 1];
            j++;
        }
        else if (k < M and matn[k] != soz[c])
        {
            cout << matn[k];
            if (c != 0)
            {
                c = arr[c - 1];
            }
            else
            {
                k++;
            }
        }
    }
    cout << endl;
    almash(matn, soz, M, S);
}
int main()
{
    string matn;
    cout << "Matnni kriting : ";
    getline(cin, matn);
    string soz;
    cout << "Izlayotgan so'zni kriting = ";
    getline(cin, soz);
    KMP(matn, soz);
    return 0;
}