#include "WidgetVoltmeter.h"


WidgetVoltmeter::WidgetVoltmeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataVoltageTopic,0,sizeof(pDataVoltageTopic));
    sprintf(pDataVoltageTopic,"channel/voltmeter_%d/data/voltage",_Item);
}

WidgetVoltmeter::~WidgetVoltmeter()
{

}

void WidgetVoltmeter::begin(void (*UserCallBack)(void))
{
}


void WidgetVoltmeter::displayVoltage(float ucVal)
{
    IntoRobot.publish(pDataVoltageTopic,ucVal);
}


void WidgetVoltmeter::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

