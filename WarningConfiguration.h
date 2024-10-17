#ifndef WARNING_CONFIGURATION_H
#define WARNING_CONFIGURATION_H

typedef struct {
    int temperatureWarningEnabled;
    int socWarningEnabled;
    int chargeRateWarningEnabled;
} WarningConfiguration;

extern WarningConfiguration warningConfiguration;
void EnableTemperatureWarning(int enabled);
void EnableSocWarning(int enabled);
void EnableChargeRateWarning(int enabled);

#endif // WARNING_CONFIGURATION_H
