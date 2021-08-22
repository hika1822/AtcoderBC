#include <bits/stdc++.h>
using namespace std;

int main()
{
/***********************定義************************/
    int result = 0;
    int n;
    vector<int> tramps(n);//イント型の配列
/////////////////////////////////////////////////////
/***********************入力************************/
    cin >> n;
    //配列の入力方法
    for(int i = 0; i < n; i++)
    {
        cin >> tramps[i];
    }
    sort(tramps.begin(), tramps.end(), greater<int>());
/////////////////////////////////////////////////////
/***********************演算************************/

    int Alice = 0;
    int Bob = 0;
    for(int i = 0; i < n; i += 2)
    {
        Alice += tramps[i];
        Bob += tramps[i+1];
    }
    /************************************************
    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            Bob = Bob + tramps[i];
        }
        if(i%2 == 1)
        {
            Alice = Alice + tramps[i];
        }
    }
    ************************************************/

    result = Alice - Bob;
/////////////////////////////////////////////////////
/***********************出力************************/
    cout << result << endl;
    return 0;
}