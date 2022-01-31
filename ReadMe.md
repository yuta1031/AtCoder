## Macの初期設定

- VSCodeのインストール
- VSCode プラグインのインストール
    - C++
    - Code Runner
- gccのインストール
- シンボリックリンクの設定(VSCodeでgccを使うようにする)

## 解法の指針
- 全探索
    - 計算量$10^{9}$くらいまで
- 情報量を減らして全探索
    - 保存する値の変換(ex. 入力自体でなく、フラグや条件に合致する数のみ保存する)
- 再帰
    - DFS(深さ優先探索, depth first search)
    - BFS(幅優先探索, breadth first search)
- 法則化
    - 周期性(f(x)でおいてxが動いたときの周期を利用してループを回避)
    - n -> n+1 で帰納法
- 問題の置き換え(同値な問題に変換する)
- オーバーフローの回避
    - 都度modをとる
    - とりあえずlong long intを使う
- 文字列操作
    - swap, reverseの利用
- modの利用
- 倍数、約数の法則
- 割り算をしない
- パターン化
- 実験して解の範囲を抑える
- DP