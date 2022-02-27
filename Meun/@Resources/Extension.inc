[Extend]
Group=#ExtendGroup#
DynamicVariables=1
W=80
H=80
ImageAlpha=125
Hidden=1
ImageName=#Background#

[Extend-]
Group=#ExtendGroup-#
DynamicVariables=1
W=42
H=66
Hidden=1
PreserveAspectRatio=1

[ExtendRPG]
ImageTint=#RGBE#

[ExtendNo.1]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=(#MenuButtonX#+48)
Y=(#MenuButtonY#+91)

[ExtendNo.2]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=-110r
Y=0r

[ExtendNo.3]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=-55r
Y=-103r

[ExtendNo.4]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=54r
Y=-100r

[ExtendNo.5]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=107r
Y=0r

[ExtendNo.6]
Meter=Image
MeterStyle=Extend|ExtendRPG
X=55r
Y=103r

[ExtendNo.1-]
Meter=Image
MeterStyle=Extend-
X=(#MenuButtonX#+67)
Y=(#MenuButtonY#+96)
ImageName=#ImageEx1#
LeftMouseDownAction=[#ImageEx1-#]

[ExtendNo.2-]
Meter=Image
MeterStyle=Extend-
X=-110r
Y=2r
ImageName=#ImageEx2#
LeftMouseDownAction=["#ImageEx2-#"]

[ExtendNo.3-]
Meter=Image
MeterStyle=Extend-
X=-55r
Y=-103r
ImageName=#ImageEx3#
LeftMouseDownAction=["#ImageEx3-#"]

[ExtendNo.4-]
Meter=Image
MeterStyle=Extend-
X=54r
Y=-100r
ImageName=#ImageEx4#
LeftMouseDownAction=["#ImageEx4-#"]

[ExtendNo.5-]
Meter=Image
MeterStyle=Extend-
X=108r
Y=0r
ImageName=#ImageEx5#
LeftMouseDownAction=["#ImageEx5-#"]

[ExtendNo.6-]
Meter=Image
MeterStyle=Extend-
X=54r
Y=103r
ImageName=#ImageEx6#
LeftMouseDownAction=["#ImageEx6-#"]