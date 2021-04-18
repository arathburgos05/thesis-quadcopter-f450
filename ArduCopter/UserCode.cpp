#include "Copter.h"

#ifdef USERHOOK_INIT
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
    // primary input control channels
//    RC_Channel *channel_roll;
//    RC_Channel *channel_pitch;
//    RC_Channel *channel_throttle;
//    RC_Channel *channel_yaw;

//    hal.console->printf("CH_Roll: %d\n ", channel_roll->get_control_in());
    hal.console->printf("CH_Pitch: %d\n ", channel_pitch->get_control_in());
//    hal.console->printf("CH_Throttle: %d\n ", channel_throttle->get_control_in());
//    hal.console->printf("CH_Yaw: %d\n ", channel_yaw->get_control_in());

//    hal.console->printf("Roll: %.2f [deg]  Yaw: %.2f [deg]  Pitch: %.2f [deg]\n", ahrs.roll*180.0/M_PI, ahrs.pitch*180.0/M_PI, ahrs.yaw*180.0/M_PI);
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
