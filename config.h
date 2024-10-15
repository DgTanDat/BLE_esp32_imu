
//BLE Server name (the other ESP32 name running the server sketch)
#define bleServerName "Movella DOT"
#define DATA_LENGTH 4
float delta_t = 0.0167;

union IntFloat {
    unsigned int i;
    float f;
};


static float positionX = 0;
static float positionY = 0;
static float positionZ = 0;

float accX = 0;
float accY = 0;
float accZ = 0;

static float curVecX = 0;
static float curVecY = 0;
static float curVecZ = 0;

