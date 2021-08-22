#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*******************************************************
     指針:1の位は10で割ったものの余り
     　　 10の位は10で割ったものであることを利用して解く
     ******************************************************/
    int n,a,b,ans=0;//20, 2, 5
    cin >> n >> a >> b;
    
    //1～Nの整数を一つずつ調べていく
    for(int i=1;i<=n;i++)//以下を20回繰り返す
    {
        int x=i;//20回
        int sum=0;
        while(x)//20回分のループにている間
        {
            //1回目のループの場合、sumに１を１０で割ったものすなわちの余りを足す
            sum = sum + x % 10;//合計値に一の位をたしたもの
            //1を10で割る
            x = x / 10;//これが10の位
        }
        if(sum >= a && sum <= b)//2≦(各桁の和)≦5のとき、
        {
            ans += i;//ansにその整数を足す
        }
    }
    cout << ans << endl;//ansを出力
    return 0;
}