# switch if �������x��r in C#
�R�[�h���Ŏw�肵��LOOP_TIME����, "for���[�v+����", "switch-case+����", "if-else+����"���s��.  
���ꂼ��ɂ���, Stopwatch��p���Ď��Ԍv�����s��, �Ō�ɂ��̌��ʂ��o�͂���.

ValCheck_IF.cs�����ValCheck_SW�̃R�[�h������, ���f�B���N�g���ɂ���test_file_print.c��p���čs����.

<<<<<<< Updated upstream
## �茳�̊��ł̎��s����
=======
## ���s����1
>>>>>>> Stashed changes
### ����
|param|value|
|-|-|
|LOOP_TIME|10000|
|Configuration|Debug|
|Platform|AnyCPU|
|TargetFramework|.NetCore3.1|
<<<<<<< Updated upstream
=======
|Optmize|false|
>>>>>>> Stashed changes

### �o��
~~~
Completed.      TicksPerMillisecond:10000       for:4568        switch:108468   if:219325
~~~
|for only|switch-case|if-else|
|-|-|-|
|0.4568[ms]|10.8468[ms]|21.9325[ms]|

<<<<<<< Updated upstream
=======
## ���s����2
### ����
|param|value|
|-|-|
|LOOP_TIME|10000|
|Configuration|Release|
|Platform|AnyCPU|
|TargetFramework|.NetCore3.1|
|Optmize|true|

### �o��
~~~
Completed.      TicksPerMillisecond:10000       for:1913        switch:134258   if:83362
~~~
|for only|switch-case|if-else|
|-|-|-|
|0.1913[ms]|13.4258[ms]|8.3362[ms]|

## ���_
����ȉ�����s�����킯�ł͂Ȃ��̂Ŋm���ɂ����ł���Ƃ�����킯�ł͂Ȃ���, �œK���������switch-case����if-else�̕��������Ȃ�.  �Ƃ�����, if�ɂ͍œK����������₷��, ���s���x�������ȉ��ɂȂ�.


>>>>>>> Stashed changes
## ���Ȃ݂�
�茳�̊�����, if�����Ȃ��Ƃ�2000�i�𒴂����, �u�����������邩���G�����ā`�v�Ƃ������ăr���h�ł��Ȃ�����.  
1024�ŋ�؂��Ă�̂��ȂƂ��v������.