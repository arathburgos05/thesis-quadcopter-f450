/*
 * mode_orientation_ctrl.cpp
 *
 *  Created on: Oct 11, 2021
 *      Author: User
 */

#include "Copter.h"
#include "UserVariables.h"
#include "AP_Arming.h"

//#include "GCS.h"

//float ctrl_yaw = 0.0;
//float ctrl_pitch = 0.0;
//float ctrl_roll = 0.0;

//int16_t radio_th = 0;
//int16_t radio_roll = 0;
//int16_t radio_pitch = 0;
//int16_t radio_yaw = 0;

uint16_t time_elapsed_ms_1 = 0U;

//char buffer_msg[50] = "";

// This method runs at 400 Hz
void ModeOrientationCtrl::run() {

	// [THESIS] Every 2.5ms
	if ( ++time_elapsed_ms_1 >= TIME_TO_SEND_MSG_1 ) {  // 8 seg
//		hal.util->snprintf(buffer_msg, 50U, "roll: %.1f\tpitch: %.1f\tyaw: %.1f", ahrs.roll*RAD_TO_DEG, ahrs.pitch*RAD_TO_DEG, ahrs.yaw*RAD_TO_DEG);
//		gcs().send_text(MAV_SEVERITY_INFO, "%s", buffer_msg);
		gcs().send_text(MAV_SEVERITY_INFO, "ModeOrientationCtrl::run");


		time_elapsed_ms_1 = 0U;
	}

	// [THESIS] Update the radio signals (channels)
//	radio_th = GET_REF_THROTTLE_RAW;
//	radio_roll = GET_REF_ROLL_RAW;
//	radio_pitch = GET_REF_PITCH_RAW;
//	radio_yaw = GET_REF_YAW_RAW;

	// [THESIS] Update the gyroscope and ahrs signals
//	ahrs.update(); 			// attitude and heading reference system (AHRS)
//	gyro = ins.get_gyro();	// pqr

	// [THESIS] Orientation control (PD)
	/* el set point es cero para todos los ángulos
	 *
	 * kp -> Posición | kd -> Relacionado a la derivada de la posición (velocidad angular)
	 *
	 **/
//	ctrl_roll = kp.roll * ahrs.roll 	+ kd.roll * gyro.x;
//	ctrl_pitch = kp.pitch * ahrs.pitch 	+ kd.pitch * gyro.y;
//	ctrl_yaw = kp.yaw * ahrs.yaw 		+ kd.yaw * gyro.z;

	// [THESIS] Update the variables for the motors output
//	motor[Motor::ONE] = radio_th - radio_roll + radio_pitch + radio_yaw + ctrl_roll - ctrl_pitch
//			- ctrl_yaw /*+ ctrl.z*/;
//	motor[Motor::TWO] = radio_th + radio_roll - radio_pitch + radio_yaw - ctrl_roll + ctrl_pitch
//			- ctrl_yaw /*+ ctrl.z*/;
//	motor[Motor::THREE] = radio_th + radio_roll + radio_pitch - radio_yaw - ctrl_roll - ctrl_pitch
//			+ ctrl_yaw /*+ ctrl.z*/;
//	motor[Motor::FOUR] = radio_th - radio_roll - radio_pitch - radio_yaw + ctrl_roll + ctrl_pitch
//			+ ctrl_yaw /*+ ctrl.z*/;

	//fake safe min command 1149 se obtiene del minValue +50
//	if (radio_th > MAX_THROTTLE_FOR_FAKE_SAFE) {
//		// [THESIS] Set from motor[0] up to motor[3] values to RCOutput class.
//		for (uint8_t idx = Motor::ONE; idx < Motor::FOUR; ++idx) {
//			hal.rcout->write(idx, motor[idx]);
//		}
//	} else {
//		// [THESIS] Set from motor[0] up to motor[3] in MAX_MOTOR_VALUE to RCOutput class.
//		for (uint8_t idx = Motor::ONE; idx < Motor::FOUR; ++idx) {
//			hal.rcout->write(idx, MAX_MOTOR_VALUE);
//		}
//	}
}


