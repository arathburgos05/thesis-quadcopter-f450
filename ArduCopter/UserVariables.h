// user defined variables

// example variables used in Wii camera testing - replace with your own
// variables
#ifdef USERHOOK_VARIABLES

#if WII_CAMERA == 1
WiiCamera           ircam;
int                 WiiRange=0;
int                 WiiRotation=0;
int                 WiiDisplacementX=0;
int                 WiiDisplacementY=0;
#endif  // WII_CAMERA

#endif  // USERHOOK_VARIABLES

// variables
#ifdef CUSTOMED_VARIABLES
    float angle_roll;
    float c_roll = 0, c_pitch = 0, c_yaw = 0;

    struct kp_gains {
        uint8_t _roll;
        uint8_t _pitch;
        uint8_t _yaw;
    } kp = {160, 160, 120};
#endif  // CUSTOMED_VARIABLES
