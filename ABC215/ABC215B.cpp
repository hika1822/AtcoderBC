#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;//指数など巨大な整数を扱う場合はlong longを使う
    cin >> n;
    long long k = 1;

    for(long long i = 0; i <= 99; i++)
    {
        k = k*2;
        if(k > n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}