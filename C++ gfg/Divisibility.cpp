#include <bits/stdc++.h>
using namespace std;
void div(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        cout << "FugadiFoo\n";
    else
    {
        if (n % 3 == 0)
            cout << "Foo\n";
        else if (n % 5 == 0)
            cout << "Bai\n";
        else cout << "\n";
    }
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
        div(i);
    }
    return 0;
}