// User defined variables

// [THESIS] Definition of the variables for the orientation control mode.
#if ORIENTATION_CTRL_VARIABLES == ENABLED

// [THESIS] These definitions are to get simpler the control laws.
// [THESIS] Get reference pitch raw value [-32,768, 32,767]
#define GET_REF_PITCH_RAW copter.channel_pitch->get_control_in()
// [THESIS] Get reference roll raw value [-32,768, 32,767]
#define GET_REF_ROLL_RAW copter.channel_roll->get_control_in()
// [THESIS] Get reference yaw raw value [-32,768, 32,767]
#define GET_REF_YAW_RAW copter.channel_yaw->get_control_in()
// [THESIS] Get reference throttle raw value [-32,768, 32,767]
#define GET_REF_THROTTLE_RAW copter.channel_throttle->get_control_in()

// [THESIS] These definitions are to get simpler the control laws.
// [THESIS] Get current pitch value in radians [-M_PI, M_PI]
#define GET_CURR_PITCH_RAD ahrs.get_pitch()
// [THESIS] Get current roll value in radians [-M_PI, M_PI]
#define GET_CURR_ROLL_RAD ahrs.get_roll()
// [THESIS] Get current yaw value in radians [-M_PI, M_PI]
#define GET_CURR_YAW_RAD ahrs.get_yaw()

// [THESIS] Get current pitch raw value [-32,768, 32,767]
#define GET_CURR_PITCH_RAW ahrs.pitch_sensor
// [THESIS] Get current roll raw value [-32,768, 32,767]
#define GET_CURR_ROLL_RAW ahrs.roll_sensor
// [THESIS] Get current yaw raw value [-32,768, 32,767]
#define GET_CURR_YAW_RAW ahrs.yaw_sensor



//Vector3f gyro;
//static AP_InertialSensor ins;

// [THESIS] Definition like extern of the control variables.
//extern float ctrl_yaw;
//extern float ctrl_pitch;
//extern float ctrl_roll;
//
//extern int16_t radio_th;
//extern int16_t radio_roll;
//extern int16_t radio_pitch;
//extern int16_t radio_yaw;

// [THESIS] Definition of the pd structure and creation of the object.
//struct kp_gains {
//    uint8_t roll;
//    uint8_t pitch;
//    uint8_t yaw;
//} kp = {160, 160, 120}, kd = {0, 0, 0};

//fake safe min command 1149 se obtiene del minValue +50
#define MAX_MOTOR_VALUE				1100

//
#define MAX_THROTTLE_FOR_FAKE_SAFE	1149


//enum Motor {
//	ONE =	0,
//	TWO =	1,
//	THREE =	2,
//	FOUR =	3
//};
//
//uint16_t motor[4] = {0, 0, 0, 0};

#define TIME_TO_SEND_MSG_1		3200U
#define TIME_TO_SEND_MSG_2		100U

extern uint16_t time_elapsed_ms_1;
extern uint16_t time_elapsed_ms_2;
//extern char buffer_for_msg[50];

#endif  // ORIENTATION_CTRL_VARIABLES
