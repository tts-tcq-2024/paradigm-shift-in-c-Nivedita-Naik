#ifndef PARAM_CHECKER_H
#define PARAM_CHECKER_H

void PrintWarning(const char* parameter, const char* condition);
void PrintMessage(const char* parameter, const char* condition);
int IsOutOfRange(float value, float lowerLimit, float upperLimit);
int IsApproachingLowerLimit(float value, float lowerLimit, float warningTolerance,const char* parameter);
int IsApproachingUpperLimit(float value, float upperLimit, float warningTolerance,const char* parameter);
void CheckOutofRange(float value, float lowerLimit,float upperLimit, const char* parameter);
void CheckLowerLimitWarning(float value, float lowerLimit, float warningTolerance, const char* parameter);
void CheckUpperLimitWarning(float value, float upperLimit, float warningTolerance, const char* parameter);
int CheckRangeLimit(float value, float lowerLimit,float upperLimit, float warningTolerance, const char* parameter, int warningEnabled) ;
int IsWithinRange(float value, float lowerLimit, float upperLimit, float warningTolerance, const char* parameter, int warningEnabled);

#endif // PARAM_CHECKER_H
