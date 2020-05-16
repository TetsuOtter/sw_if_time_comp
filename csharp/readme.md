# switch if 処理速度比較 in C#
コード内で指定したLOOP_TIMEだけ, "forループ+処理", "switch-case+処理", "if-else+処理"を行う.  
それぞれについて, Stopwatchを用いて時間計測を行い, 最後にその結果を出力する.

ValCheck_IF.csおよびValCheck_SWのコード生成は, 同ディレクトリにあるtest_file_print.cを用いて行った.

## 手元の環境での実行結果
### 条件
|param|value|
|-|-|
|LOOP_TIME|10000|
|Configuration|Debug|
|Platform|AnyCPU|
|TargetFramework|.NetCore3.1|

### 出力
~~~
Completed.      TicksPerMillisecond:10000       for:4568        switch:108468   if:219325
~~~
|for only|switch-case|if-else|
|-|-|-|
|0.4568[ms]|10.8468[ms]|21.9325[ms]|

## ちなみに
手元の環境だと, ifが少なくとも2000段を超えると, 「式が長すぎるか複雑すぎて～」とか言われてビルドできなかった.  
1024で区切ってるのかなとか思ったり.