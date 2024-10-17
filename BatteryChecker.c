#include <stdio.h>
#include "Param_Checker.h"
#include "WarningConfiguration.h"
#include "BatteryChecker.h"


 int TemperatureIsOk( float temperature) {
    return IsWithinRange(temperature, TEMPERATURE_LOWER_LIMIT, TEMPERATURE_UPPER_LIMIT, TEMPERATURE_WARNING_TOLERANCE, "Temperature", warningConfiguration.temperatureWarningEnabled);
}

 int SocIsOk( float soc) {
    return IsWithinRange(soc, SOC_LOWER_LIMIT, SOC_UPPER_LIMIT, SOC_WARNING_TOLERANCE, "Charge State", warningConfiguration.socWarningEnabled);
}

 int ChargeRateIsOk( float chargeRate) {
    return CheckRangeLimit(chargeRate,0, CHARGE_RATE_UPPER_LIMIT, CHARGE_RATE_WARNING_TOLERANCE, "Charge Rate", warningConfiguration.chargeRateWarningEnabled);
}
int BatteryIsOk( float temperature, float soc,float  chargeRate) {
    return TemperatureIsOk(temperature) && SocIsOk(soc) && ChargeRateIsOk(chargeRate);
}
