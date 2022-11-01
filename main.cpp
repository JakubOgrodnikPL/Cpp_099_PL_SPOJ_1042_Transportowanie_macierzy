#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int macierz_pierwotna[m][n];
    int element;
    // Wpisanie macierzy
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>element;
            macierz_pierwotna[i][j] = element;
        }
    }
    // Wypisanie macierzy zamieniajac kolumny z wierszami
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<macierz_pierwotna[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
