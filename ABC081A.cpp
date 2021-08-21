#include <bits/stdc++.h>
using namespace std;

int main()
{
    string BeeBall;
    cin >> BeeBall;
    int counter = 0;

    for(int i = 0; i < BeeBall.length(); i++)
    {
    //1があった分だけカウントする
    if(BeeBall[i] == '1')
    {
        counter++;
    }
    }
    cout << counter << endl;
    return 0;

}