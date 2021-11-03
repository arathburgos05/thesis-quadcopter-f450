#include "Copter.h"
#include "UserVariables.h"

char buffer_msg[50] = "";

#ifdef USERHOOK_INIT

//uint16_t time_elapsed_ms_2 = 0U;

void Copter::userhook_init()
{
    // put your initialisation code here
    // this will be called once at start-up
}
#endif

#ifdef USERHOOK_FASTLOOP
void Copter::userhook_FastLoop()
{
    // put your 100Hz code here
}
#endif

#ifdef USERHOOK_50HZLOOP
void Copter::userhook_50Hz()
{
    // put your 50Hz code here
}
#endif

#ifdef USERHOOK_MEDIUMLOOP
void Copter::userhook_MediumLoop()
{
    // put your 10Hz code here

	// [THESIS] Every 100ms
//	if ( ++time_elapsed_ms_2 >= TIME_TO_SEND_MSG_2 ) { // 10 seg
//		gcs().send_text(MAV_SEVERITY_INFO, "Message Sent Successfully from Copter::userhook_MediumLoop()\0");
//		time_elapsed_ms_2 = 0U;
//	}
}
#endif

#ifdef USERHOOK_SLOWLOOP
void Copter::userhook_SlowLoop()
{
    // put your 3.3Hz code here
}
#endif

#ifdef USERHOOK_SUPERSLOWLOOP
void Copter::userhook_SuperSlowLoop()
{
    // put your 1Hz code here
	// [THESIS] Every 2.5ms
//	if ( ++time_elapsed_ms_1 >= TIME_TO_SEND_MSG_1 ) {  // 8 seg
		hal.util->snprintf(buffer_msg, 50U, "roll: %.1f\tpitch: %.1f\tyaw: %.1f", ahrs.roll*RAD_TO_DEG, ahrs.pitch*RAD_TO_DEG, ahrs.yaw*RAD_TO_DEG);
		gcs().send_text(MAV_SEVERITY_INFO, "%s", buffer_msg);
//		gcs().send_text(MAV_SEVERITY_INFO, "userhook_SuperSlowLoop");


//		time_elapsed_ms_1 = 0U;
//	}
}
#endif

#ifdef USERHOOK_AUXSWITCH
void Copter::userhook_auxSwitch1(uint8_t ch_flag)
{
    // put your aux switch #1 handler here (CHx_OPT = 47)
}

void Copter::userhook_auxSwitch2(uint8_t ch_flag)
{
    // put your aux switch #2 handler here (CHx_OPT = 48)
}

void Copter::userhook_auxSwitch3(uint8_t ch_flag)
{
    // put your aux switch #3 handler here (CHx_OPT = 49)
}
#endif
