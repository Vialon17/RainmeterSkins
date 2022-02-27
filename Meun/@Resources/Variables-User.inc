[Variables]
;用户在此进行自定义编辑，记得保存刷新

;六角蜂窝的六个图标，顺序:1为右下，顺时针旋转
;拾柒做了多个后备图标，放在@Resources文件夹内，用于自定义搭配六角蜂窝
;@Resources路径:C:\Users\用户名\Documents\Rainmeter\Skins\Meun\@Resources
;Menu变量为中央按钮,e.g:Menu=#@#Vialon.png
;普通格式:ImageX=#@#\Image\xxxxx.png
;Image Begin
Menu=#@#Vialon.png
Image1=#@#\Image\Weibo.png
Image2=#@#\Image\NetEase Music.png
Image3=#@#\Image\VS.png
Image4=#@#\Image\FireFox.png
Image5=#@#\Image\Steam.png
Image6=#@#\Image\PS.png
;Image End

;在这里添加上述图标对应App的具体路径exe
 ;e.g: QQ=C:\Program Files\tencent\QQ.exe
 ;注:无需更改变量名称，尽量少使用中文!否则可能会出现对应程序无法运行的bug
 ;注:我的电脑的路径为
 ;                 ::{20D04FE0-3AEA-1069-A2D8-08002B30309D}
;Path begin
Image1-=F:\Download\blood c\01.mp4
Image2-=E:\CloudMusic\cloudmusic.exe
Image3-=E:\Visual Studio 2013\Common7\IDE\devenv.exe
Image4-=E:\Firefox\firefox.exe
Image5-=C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Steam\Steam.lnk
Image5--=C:\ProgramData\Microsoft\Windows\Start Menu\Programs\steamcommunity_302.lnk
;注:在此我设置了第五个图标可同时打开两个App，用不到的可以删去Image5--变量
Image6-=E:\Photoshop CS6\Adobe Photoshop CS6 (64 Bit)\Photoshop.exe
;Path end

;自定义内蜂窝颜色，格式:"xxx,xxx,xxx,xxx"
;说明:前三项为RGB值，尾项为显现(中间)的六角框的透明度，取值0-255
RGBT=102,204,255,255

;拓展六角蜂巢部分:
;Extend Enable?取值0/1
Extend0=1

;Entend Begin
ImageEx1=#@#\Image\Iqiyi.png
ImageEx2=
ImageEx3=
ImageEx4=
ImageEx5=
ImageEx6=
;Entend End

;拓展蜂窝RGB颜色，同上
RGBE=33,220,99,255

;Path Begin
ImageEx1-=
ImageEx2-=
ImageEx3-=
ImageEx4-=
ImageEx5-=
ImageEx6-=
;应用外六角蜂窝时会有1s的延迟，目前尚未对代码进行优化，下个版本将对延迟进行优化(1.1版本已经优化)
;请勿对此文件中文部分进行更改，由于文件编码格式不同，用win自带记事本编辑可能会出现无法加载的问题
