/*
 * mode_customfm.cpp
 *
 *  Created on: Mar 13, 2021
 *      Author: User
 */

#include "Copter.h"
#include "UserVariables.h"

// This method runs at 400 Hz
void ModeCustomed::run() {
    angle_roll = ahrs.roll;
//    const AP_InertialSensor &ins = AP::ins();
//    const Vector3f &gyro = ins.get_gyro();

    g.a_roll = ahrs.roll;

//    c_roll = kp._roll*ahrs.roll     + kd._r
}

