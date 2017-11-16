#ifndef WIDGET_VOLTMERTER_H_
#define WIDGET_VOLTMERTER_H_

#include "application.h"

class WidgetVoltmeter : public WidgetBaseClass
{
    public:
        WidgetVoltmeter(uint8_t ucItem = 0);
        ~WidgetVoltmeter();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayVoltage(float ucVal);

    private:
        char pDataVoltageTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
