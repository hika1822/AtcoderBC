#include <bits/stdc++.h>
using namespace std;

int main()
{
/////////////////////////////////////////////////////
/***********************入力************************/
    char XXXX[4];//stringの一文字バージョン

    //文字列を数字列に変換するときの方法
    for(int i = 0; i < 5; i++)
    {
        XXXX[i] = 0;//文字列を整数0に置き換える
    }

    cin >> XXXX;

/////////////////////////////////////////////////////
/***********************演算************************/

    bool same = true;
    bool next = true;

    for(int i = 0; i < 3; i++)
    {
        if(XXXX[i] != XXXX[i + 1])
        {
            same = false;
        }
        if((XXXX[i] + 1) % 10 != (XXXX[i + 1]) % 10)
        {
            next = false;
        }
    }

/////////////////////////////////////////////////////
/***********************出力************************/

    if(same || next)
    {
        cout << "Weak" << endl;
    }
    else
    {
        cout << "Strong" << endl;
    }
    return 0;
}