#include <iostream>
using namespace std;

int main()
{
     /*
      PRINT THE PATTERN -3
       4321
       4321
       4321
       4321
    */
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
