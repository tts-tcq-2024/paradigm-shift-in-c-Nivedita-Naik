#include <stdio.h>
#include "Param_Checker.h"
#include "WarningConfiguration.h"
void PrintWarning(const char* parameter, const char* condition) {
    printf("Warning: %s %s\n", parameter, condition);
}

void PrintMessage(const char* parameter, const char* condition) {
    printf("%s out of range: %s!\n", parameter, condition);
}

int IsOutOfRange(float value, float lowerLimit, float upperLimit) {
    return value < lowerLimit || value > upperLimit;
}


int IsApproachingLowerLimit(float value, float lowerLimit, float warningTolerance,const char* parameter) {
    if( value < (lowerLimit + warningTolerance))
    {
         PrintWarning(parameter, "approaching lower limit");
    }
    return 1;
}

int IsApproachingUpperLimit(float value, float upperLimit, float warningTolerance, const char* parameter) {
    if( value > (upperLimit - warningTolerance))
    {
        PrintWarning(parameter, "approaching upper limit");
    }
    return 1;
}

void CheckOutofRange(float value, float lowerLimit, float upperLimit, const char* parameter) {
    if (IsOutOfRange(value,lowerLimit,upperLimit)) {
        PrintMessage(parameter, "Out of Range");
    }
}

int CheckRangeLimit(float value, float lowerLimit,float upperLimit, float warningTolerance, const char* parameter, int warningEnabled) {
   CheckOutofRange(value, lowerLimit,upperLimit, parameter);
    if (warningEnabled) {
        IsApproachingLowerLimit(value, lowerLimit, warningTolerance, parameter);
        IsApproachingUpperLimit(value, upperLimit, warningTolerance, parameter);
    }
    return 1;
}

int IsWithinRange(float value, float lowerLimit, float upperLimit, float warningTolerance, const char* parameter, int warningEnabled) {
    return CheckRangeLimit(value, lowerLimit, upperLimit, warningTolerance, parameter, warningEnabled) ;
           
}
