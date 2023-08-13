/*

****
 ***
  **
   *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        int space = 1;
        while (space < i)
        {
            cout << " ";
            space = space + 1;
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
