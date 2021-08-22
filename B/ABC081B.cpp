#include <bits/stdc++.h>
using namespace std;

/*黒板に N個の正の整数 A1,...,ANが書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
黒板に書かれている整数すべてを，2で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．*/

int main()
{
  int n;
  int i;
  cin >> n;
  vector<int> a(n);//n個の整数

  //配列の入力方法
  for(i=0; i<n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());//ソートすることにより一番小さいものから計算できるようになる
  int counter = 0;//それぞれの数を２で割った回数
  int temp = a[0];//一番最初の数

  //配列の一番最初が2で割り切れる間はnを1bitごとにシフトしていく
  //シフトしていって2で割り切れない数字に出会うまでcounterの値を増やし続ける
  while(temp%2 == 0){//n番目の数が2で割れる間は
    temp = temp >> 1;//2の指数を減らしていく
    counter++;//2で割った回数をカウントする
  }

  //一回もシフトしなかったら0を出力
  if(counter == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  int division = 1 << counter;//

  while(1){//while(1)は無限ループ処理
    for(i=0; i<a.size(); i++){
      if(a[i]%division != 0){ //n番目の整数を操作回数を1bitシフトさせたもので割ったものが0以外なら
        break;
      }
      if(i == a.size()-1){//整数を一通り操作し終えたら
        cout << counter << endl;//操作回数を出力
        return 0;//coutしたらreturn 0
      }
    }
    division = division >> 1;//
    counter--;
  }//while(1)終了
}