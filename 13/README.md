## ソート

### 選択整列法

sort_driver1.c

```sh
$ gcc sort_driver1.c -o sort_driver1
$ ./sort_driver1 5 1 # 第2引数が1の場合は、ランダムに数値３つ
$ ./sort_driver1 5 0 # 第２引数が0の場合は、キーボードがから5個の数字を入力した後、「Enter」, 次に「Ctrl-d」
```

## 整列法の性能
### 実行時間

- 選択整列法, 挿入整列法, バブル整列法: <img src="https://latex.codecogs.com/gif.latex?N^{2}">

- シェルソート : <img src="https://latex.codecogs.com/gif.latex?N^{\frac{3}{2}}">

### 作業領域
- その場で整列.余分な作業領域は必要なし

---
## *選択整列法*

file : selection.c

<img src="./images/選択整列法.png">

- 比較回数 : <img src="https://latex.codecogs.com/gif.latex?N^{2}"> 回

- 交換回数 : <img src="https://latex.codecogs.com/gif.latex?N-1"> 回 (※ 交換はループの外側にあるため。)

---
## *挿入整列法*

file : insertion.c

<img src="./images/挿入整列法.png">

- 比較回数 : <img src="https://latex.codecogs.com/gif.latex?N^{2}"> 回

- 交換回数 : <img src="https://latex.codecogs.com/gif.latex?N^{2}"> 回

- 選択整列法と異なり、キーがすでに順序通りに並んでいたら、あるいはほとんど順序通りに並んでいたら、挿入整列法は速い

---

## *バブル整列法*

<img src="./images/バブル整列法.png">

- 比較回数 : <img src="https://latex.codecogs.com/gif.latex?N^{2}"> 回

- 交換回数 : <img src="https://latex.codecogs.com/gif.latex?N^{2}"> 回