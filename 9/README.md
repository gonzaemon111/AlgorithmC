# 9 スタックについて

実行コマンド

### stack_test.cをstack_array.cを使って、コンパイルする場合
```
$ gcc-o stack_test stack_test.c stack_array.c
```

### stack_test.cをstack_linklist.cを使って、コンパイルする場合
```
$ gcc-o stack_test stack_test.c stack_linklist.c
```

## 実行コマンド

```
$ ./stack_test
```

stack_test.cとstack_array.cは、STACK.hが存在する(STACK.hがインターフェースになっている)から、stack_test.cでstack_array.cの実行が可能。

### クライアント、インプリメンテーション、インターフェース

実際に実行するファイルのことを、**クライアント**ファイルという。
  - stack_test.c

ヘッダファイルのことを、**インターフェース**ファイルという。
  - STACK.h

クライアントとは独立して、なんかしらの役割を担うファイルのことを、**インプリメンテーション**ファイルという。
  - stack_linklist.c


