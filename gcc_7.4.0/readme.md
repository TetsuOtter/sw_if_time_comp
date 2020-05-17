# switch if 処理速度比較 in C
switch-caseとif-elseで, 処理速度にどのような差があるのかを調べてみた.  なお, 「実験」というほどガッチリと行ったわけではないため, あくまで参考情報程度に思っていただきたい.

以下実行結果の「出力」は, terminalに表示された文字列を指す.  (つまり, 標準エラー出力に書き込まれた文字列である)

## forループ+空の関数呼び出し
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc valcheck_blank.c test_common.c -o vcb.out`|
|実行コマンド|`$ ./vcb.out > a.result`|
|出力|`result : 0.000000[s]`|

## if-else 最適化なし
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc if.c test_common.c -o if.out`|
|実行コマンド|`$ ./if.out > a.result`|
|出力|`result : 12.890625[s]`|

## if-else 最適化:O2
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc if.c test_common.c -O2 -o if_O2.out`|
|実行コマンド|`$ ./if_O2.out > a.result`|
|出力|`result : 1.203125[s]`|

## if-else 最適化:O2
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc if.c test_common.c -O3 -o if_O3.out`|
|実行コマンド|`$ ./if_O3.out > a.result`|
|出力|`result : 1.203125[s]`|

## switch-case 最適化なし
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc sw.c test_common.c -o sw.out`|
|実行コマンド|`$ ./sw.out > a.result`|
|出力|`result : 0.109375[s]`|

## switch-case 最適化:O2
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc sw.c test_common.c -O2 -o sw_O2.out`|
|実行コマンド|`$ ./sw_O2.out > a.result`|
|出力|`result : 0.093750[s]`|

## switch-case 最適化:O3
|meaning|console|
|-|-|
|コンパイルコマンド|`$ gcc sw.c test_common.c -O3 -o sw_O3.out`|
|実行コマンド|`$ ./sw_O3.out > a.result`|
|出力|`result : 0.109375[s]`|


## 結論
確証をもって言えるほどサンプルを集めたわけではないが, switch-caseを用いた方が速そうということがわかった.  
最適化は特にif-elseに対してよくかかり, switch-caseに関してはほぼかかっていないと思われる結果であった.

研究であればここから「なぜこうなるのか」とか調べるのだろうが, そもそもこれは「気になったから試した」程度なので, コンパイル結果は覗かないでおく.

気になる人は, ぜひほかの言語でも実験してみてほしい.

## 参考文献?
[@taai if文とswitch文の書き分けにいつも迷うのでまとめてみた - Qiita](https://qiita.com/taai/items/90cd190764f6dfcf6abd)
