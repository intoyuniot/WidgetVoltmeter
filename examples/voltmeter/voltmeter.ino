/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
显示电压大小值

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetVoltmeter.h>

WidgetVoltmeter voltmeter;

void setup() 
{
// put your setup code here, to run once.
    voltmeter.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
    voltmeter.displayVoltage(100);
    delay(2000);
}
