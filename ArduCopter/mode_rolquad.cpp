/*
 * mode_rolquad.cpp
 *
 *  Created on: 26 ene. 2021
 *      Author: PERSONAL
 */

#include "Copter.h"
#include "UserVariables.h"
void ModeRolQuad::run() //método run que se ejecuta a 400 hz
{
    const AP_InertialSensor &ins = AP::ins();
    const Vector3f &gyro = ins.get_gyro();
    posxyz = inertial_nav.get_position()*0.01;
    velxyz = inertial_nav.get_velocity()*0.01;
    rd.radio_roll=copter.channel_roll->get_radio_in();
    rd.radio_pitch=copter.channel_pitch->get_radio_in();
    rd.radio_th=copter.channel_throttle->get_radio_in();
    rd.radio_yaw=copter.channel_yaw->get_radio_in();
    rd.aux_1=rc().get_radio_in(4);
    rd.aux_2=rc().get_radio_in(5);





    //angulo_roll=ahrs.roll;
    //g.a_roll=ahrs.roll;


    //pos = inertial_nav.get_position()*0.01;       // Devuelve la posiciÃ³n actual relativa a la ubicaciÃ³n del home en cm.
    //velxyz = inertial_nav.get_velocity()*0.01;       // Devuelve la velocidad en cm/s
    //pos.x;
    //pos.y;
    //control de orientaci�n PD
    // el set point es cero para todos los �ngulos
    c_roll  = kp._roll*ahrs.roll    +  kd._roll*gyro.x;
    c_pitch = kp._pitch *ahrs.pitch +  kd._pitch*gyro.y;
    c_yaw   = kp._yaw *ahrs.yaw     +  kd._yaw*gyro.z;


    motor_1 = rd.radio_th;
    motor_2 = -c_roll+c_pitch-c_yaw;
    motor_3 = -c_roll-c_pitch+c_yaw;
    motor_4 = +c_roll+c_pitch+c_yaw;


    if(rd.radio_th>1149){ //fake safe min command 1149 se obtiene del minValue +50
        hal.rcout->write(0,motor_1);
        hal.rcout->write(1,motor_2);
        hal.rcout->write(2,motor_3);
        hal.rcout->write(3,motor_4);
    }
    else{
        hal.rcout->write(0,1100);
        hal.rcout->write(1,1100);
        hal.rcout->write(2,1100);
        hal.rcout->write(3,1100);
    }

}


