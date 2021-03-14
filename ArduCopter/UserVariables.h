// user defined variables

// example variables used in Wii camera testing - replace with your own
// variables
//#ifdef USERHOOK_VARIABLES
/*
#if WII_CAMERA == 1
WiiCamera           ircam;
int                 WiiRange=0;
int                 WiiRotation=0;
int                 WiiDisplacementX=0;
int                 WiiDisplacementY=0;
#endif  // WII_CAMERA
*/
float angulo_roll;
float c_roll=0, c_pitch=0, c_yaw=0; //se declara en cero para evitar el valor de null
struct kp_gains{   //ganancias proporcionales
    uint8_t _roll;
    uint8_t _pitch;
    uint8_t _yaw;
}kp={160,160,120};
/*
kp_roll  = 160, // Cuadri f450 fibra de carbono
      kd_roll  = 50,
      kp_pitch = 160,
      kd_pitch = 50,
      kp_yaw   = 120,
      kd_yaw   = 90,// ganancias para el pd de traslaci�n
      kp_x      =30,
      kd_x      =35,
      kp_y      =30,
      kd_y      =35,
      kp_z      =120,
      kd_z      =70,
      */
//ganancias derivativas de control de orientación
struct kd_gains{
    uint8_t _roll;
    uint8_t _pitch;
    uint8_t _yaw;
}kd={50,50,90};


//variables para los motores
float motor_1,motor_2,motor_3,motor_4;

struct radio_rc{
    int radio_roll;
    int radio_pitch;
    int radio_yaw;
    int radio_th;
    int aux_1;
    int aux_2;
    int aux_3;

}rd;



Vector3f posxyz;
Vector3f velxyz;
Vector3f ctrl;





//#endif  // USERHOOK_VARIABLES


