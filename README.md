# generate-password
- n桁のパスワードを自動生成するプログラムです。
- パスワードは小文字、大文字、数字がランダムに混じります

## 実行環境
```bash
# ubuntu
$ g++ --version
g++ (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609
Copyright (C) 2015 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## 実行方法
```bash
$ g++ -std=c++11 -O2 -Wall pass.cpp  # コンパイル
$ ./a.out  # 実行
(任意の数字)
```

## 使い方
1. C++のソースファイルをコンパイルして実行可能にします。
(exeやoutファイルはすでに実行可能状態です)
2. プログラムを実行します。
3. 欲しいパスワードの桁数を入力します。
4. n桁のパスワードが表示されます。
5. 0を入力するまで何度も生成できます。
6. 0を入力するとプログラムが終了します。

## 注意
- nを大きくしすぎると途中で止まる可能性があります。
- c++11以上からの動作を確認
