#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);
motor Left1(PORT1,ratio36_1,true);
motor Left2(PORT2,ratio36_1,true);
motor Left3(PORT3,ratio36_1,true);

motor Right1(PORT4,ratio36_1,false);
motor Right2(PORT5,ratio36_1,false);
motor Right3(PORT6,ratio36_1,false);

motor FrontIntake(PORT9);
motor BackIntake(PORT8);
digital_out matchloads(Brain.ThreeWirePort.A);
digital_out park(Brain.ThreeWirePort.B);
digital_out wing(Brain.ThreeWirePort.C);
controller Controller1(primary);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}