バブルソートはその名前が表すように、 泡 (Bubble) が水面に上がっていくよう に配列の要素が動いていきます。 バブルソートは次のようなアルゴリズムで数列を昇 順に並び変えます。

bubbloeSort(A, N)  // N個の要素を含む０ーオリジンの配列A
    flag = 1       // 逆の隣接が存在する
    while flag
        flag = 0
        for j が N-1 から 1 まで
            if A[j] < A[j-1]
                A[j]とA[j-1]を交換
                flag = 1

数列Aを読み込み、 バブルソートで昇順に並び変え出力するプログラムを作成して ください。 また、 パブルソートで行われた要素の交換回数も報告してください。 

入力 
入力の最初の行に、 数列の長さを表す整数Nが与えられます。 2行目に、N個の整 数が空白区切りで与えられます。 

出力 
出力は2行からなります。 1行目に整列された数列を1行に出力してください。 数列 の連続する要素は1つの空白で区切って出力してください。 2行目に交換回数を出力 してください。 

制約 
1 ≤ N ≤ 100 
0 ≤ Aの要素 ≤ 100

入力例
5
5 3 2 4 1

出力例
1 2 3 4 5
8