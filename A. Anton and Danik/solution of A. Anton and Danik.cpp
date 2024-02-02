#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    int anton = 0, danik = 0;
    cin >> n;
    string s1;
    cin >> s1;
 
    if (n >= 1 && n <= 100000)
    {
 
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'A')
            {
                anton++;
            }
            else if (s1[i] == 'D')
            {
                danik++;
            }
            else
            {
                anton += 0;
                danik += 0;
            }
        }
        if (anton == danik)
        {
            cout << "Friendship" << endl;
        }
        else if (danik > anton)
        {
            cout << "Danik" << endl;
        }
        else
        {
            cout << "Anton" << endl;
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
