FX取引では、異なる国の通貨を交換することで為替差の利益を得ることができま す。 例えば、 1ドル100円の時に1,000ドル買い、価格変動により1ドル108円にな った時に売ると、(108円-100円)×1,000ドル=8,000円の利益を得ることができます。
ある通貨について、時刻における価格 Rt(0,1,2…n-1) が入力として与えられるので、価格の差Rj-Ri (ただし、j>iとする) の最大値を求めてください。

入力
最初の行に整数nが与えられます。 続くn行に整数 Rt(t=0,1,2…n-1)が順番に与えられます。

出力
最大値を1行に出力してください。

制約
2 <= n <= 200,000
1 <= Rt <= 10E9

入力例1
6 5 3 1 3 4 3
出力例1
3

入力例2
3 4 3 2
出力例2
-1

入出力例1の場合は、価格が1のとき買って4のときに売ると4-1=3で最大3 の利益を得ることができます。 最初の5を使うと5-1=4となりますが、これは5 の方が時間が前なので許されません。

入出力例2の場合は、価格が減少しているケースですが、この問題ではj>iという 条件から、買って売る作業を1回は行う必要があるので、 最大利益は-1となります。

不正解時のチェックポイント
Rtが常に減少するケースは考慮していますか。
最大値の初期値は十分小さいですか。 Rtの上限を確認してみましょう。
計算量がO (n^2) のアルゴリズムを実装していませんか。 200,000^2の計算量を考えてみま しょう。
