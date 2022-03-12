;bookmark input section
[MeasureInput]
Measure=Plugin
Plugin=InputText
Command1 = [!SetVariable "tempmeasure" "$USERINPUT$"][!UpdateMeasure "MeasureURL"][!UpdateMeasure "MeasureName"][!SetVariable "URL1" "[MeasureURL]"][!SetVariable "Name1" "[MeasureName]"][!update][!Redraw]

Command2 = [!SetVariable "tempmeasure" "$USERINPUT$"][!UpdateMeasure "MeasureURL"][!UpdateMeasure "MeasureName"][!SetVariable "URL2" "[MeasureURL]"][!SetVariable "Name2" "[MeasureName]"][!update][!Redraw]

Command3 = [!SetVariable "tempmeasure" "$USERINPUT$"][!UpdateMeasure "MeasureURL"][!UpdateMeasure "MeasureName"][!SetVariable "URL3" "[MeasureURL]"][!SetVariable "Name3" "[MeasureName]"][!update][!Redraw]

Command4 = [!SetVariable "tempmeasure" "$USERINPUT$"][!UpdateMeasure "MeasureURL"][!UpdateMeasure "MeasureName"][!SetVariable "URL4" "[MeasureURL]"][!SetVariable "Name4" "[MeasureName]"][!update][!Redraw]

Command5 = [!SetVariable "tempmeasure" "$USERINPUT$"][!UpdateMeasure "MeasureURL"][!UpdateMeasure "MeasureName"][!SetVariable "URL5" "[MeasureURL]"][!SetVariable "Name5" "[MeasureName]"][!update][!Redraw]
X = 135
Y = 35
W = 150
H = 30
FontSize = 14
FontFace = Calibri
FontColor = 255,255,255,255
SolidColor = 47,47,47,255
AntiAlias = 1
StringStyle = Bold
StringAlign = Center
FocusDismiss = 1
DefaultValue = 'Rule:name url'

[MeasureURL]
Measure = String
String = [MeasureInput]
DynamicVariables = 1
RegExpSubstitute = 1
Substitute = "^\S*[\s]+" : ""

[MeasureName]
Measure = String
String = [MeasureInput]
DynamicVariables = 1
RegExpSubstitute = 1
Substitute = "[\s]+[\S]*.$" : ""

[Mark_Style]
Hidden = 1
FontSize = 18
FontFace = #FontF#
StringStyle = Bold
AntiAlias=1
ClipString = 1
W = 200
x = #MarkX#
y = #MarkY#
UpdateDivider = 100
DynamicVariables = 1
FontColor = 30,235,156,255

;;The bookmark string group
[Mark1]
Meter = String
Group = BookMark
Text = #Name1#
FontColor = #Color1#
MeterStyle = Mark_Style
LeftMouseDownAction = [#Firefox1# #URL1#]
RightMouseDownAction = [!CommandMeasure "MeasureInput" "ExecuteBatch 1"]

[Mark2]
Meter = String
Group = BookMark
Text = #Name2#
FontColor = #Color2#
Y = 35r
MeterStyle = Mark_Style
LeftMouseDownAction = [#Firefox2# #URL2#]
RightMouseDownAction = [!CommandMeasure "MeasureInput" "ExecuteBatch 2"]

[Mark3]
Meter = String
Group = BookMark
Text = #Name3#
FontColor = #Color3#
Y = 35r
MeterStyle = Mark_Style
LeftMouseDownAction = [#Firefox3# #URL3#]
RightMouseDownAction = [!CommandMeasure "MeasureInput" "ExecuteBatch 3"]

[Mark4]
Meter = String
Group = BookMark
Text = #Name4#
FontColor = #Color4#
Y = 35r
MeterStyle = Mark_Style
LeftMouseDownAction = [#Firefox4# #URL4#]
RightMouseDownAction = [!CommandMeasure "MeasureInput" "ExecuteBatch 4"]

[Mark5]
Meter = String
Group = BookMark
Text = #Name5#
FontColor = #Color5#
Y = 35r
MeterStyle = Mark_Style
LeftMouseDownAction = [#Firefox5# #URL5#]
RightMouseDownAction = [!CommandMeasure "MeasureInput" "ExecuteBatch 5"]

