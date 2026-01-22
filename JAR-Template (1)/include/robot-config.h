using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern controller Controller1;
extern motor FrontIntake;
extern motor BackIntake;
extern motor Left1;
extern motor Left2;
extern motor Left3;
extern motor Right1;
extern motor Right2;
extern motor Right3;
extern digital_out park;
extern digital_out matchloads;
extern digital_out wing;

void  vexcodeInit( void );