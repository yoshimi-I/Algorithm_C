# キュー
## 概要
- 簡単に言えば、FIFO
- 下に蓋がない筒をイメージする
## 操作
- enque()
    - キューに値を入れる
- deque()
    - キューから値を取り出す
- 
## 実装方法
- まずはheadとtail(先頭と最後尾)の配列番号を保持する
- 具体的には配列を用意するが配列の値が最大になったタイミングで最大値を0に変える
- そうすることで、円状の配列とみなすことができる。