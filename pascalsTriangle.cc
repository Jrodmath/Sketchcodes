#include <iostream>
using namespace std;

void pascalsTriangle(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int coef = 1;
        for(int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n \n";
    cin >> n;
    cout << "Pascal's triangle is \n";
    pascalsTriangle(n);

    return 0;
}