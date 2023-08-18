/*
      1
    2 3
  4 5 6
7 8 9 10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " " << " ";
            space = space - 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value = value + 1;
        }
        cout << endl;
    }
}
