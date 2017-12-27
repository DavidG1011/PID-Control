#include <cmath>
#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd)
{
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    sum = 0;
    prev = 0;
}

void PID::UpdateError(double cte)
{
    p_error = -Kp * cte;
    sum += cte;
    i_error = -Ki * sum;
    // D works without calculating time difference
    d_error = -Kd * (cte - prev);
    prev = cte;
}

double PID::TotalError()
{
    // -Kp * cte - Ki * sum - Kd * (cte - prev) - works out to be equation from lecture
    return p_error + i_error + d_error;
}
