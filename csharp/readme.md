# switch if �������x��r in C#
�R�[�h���Ŏw�肵��LOOP_TIME����, "for���[�v+����", "switch-case+����", "if-else+����"���s��.  
���ꂼ��ɂ���, Stopwatch��p���Ď��Ԍv�����s��, �Ō�ɂ��̌��ʂ��o�͂���.

ValCheck_IF.cs�����ValCheck_SW�̃R�[�h������, ���f�B���N�g���ɂ���test_file_print.c��p���čs����.

## �茳�̊��ł̎��s����
### ����
|param|value|
|-|-|
|LOOP_TIME|10000|
|Configuration|Debug|
|Platform|AnyCPU|
|TargetFramework|.NetCore3.1|

### �o��
~~~
Completed.      TicksPerMillisecond:10000       for:4568        switch:108468   if:219325
~~~
|for only|switch-case|if-else|
|-|-|-|
|0.4568[ms]|10.8468[ms]|21.9325[ms]|

## ���Ȃ݂�
�茳�̊�����, if�����Ȃ��Ƃ�2000�i�𒴂����, �u�����������邩���G�����ā`�v�Ƃ������ăr���h�ł��Ȃ�����.  
1024�ŋ�؂��Ă�̂��ȂƂ��v������.