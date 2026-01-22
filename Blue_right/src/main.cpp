/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:The GOAT AJ       C:\Users\Administrator                                    */
/*    Created:      Thu Sep 25 2025                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Drivetrain           drivetrain    1, 2, 4, 5      
// front                motor         8               
// second               motor         9               
// thrid                motor         10              
// fourth               motor         11              
// fifth                motor         12              
// sixth                motor         13              
// park                 digital_out   A               
// matchloads           digital_out   B               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {


  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
front.setVelocity(100,percent);
  second.setVelocity(100,percent);
  third.setVelocity(100,percent);
  fourth.setVelocity(100,percent);
  fifth.setVelocity(100,percent);
  sixth.setVelocity(100,percent);
  Drivetrain.setDriveVelocity(75,percent);
  Drivetrain.setTurnVelocity(20,percent);
  Drivetrain.setStopping(brake);
  front.setMaxTorque(100,percent);
  second.setMaxTorque(100,percent);
  third.setMaxTorque(100,percent);
  fourth.setMaxTorque(100,percent);
  fifth.setMaxTorque(100,percent);
  sixth.setMaxTorque(100,percent);
  front.setStopping(hold);
  second.setStopping(hold);
  third.setStopping(hold);
  fourth.setStopping(hold);
  fifth.setStopping(hold);
  sixth.setStopping(hold);
}
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...


/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  front.setVelocity(100,percent);
  second.setVelocity(100,percent);
  Drivetrain.setDriveVelocity(30,percent);
  Drivetrain.setTurnVelocity(50,percent);
  Drivetrain.setStopping(brake);
  front.setMaxTorque(100,percent);
  second.setMaxTorque(100,percent);
  Drivetrain.driveFor(18,inches);
Drivetrain.turnFor(24,degrees);
wait(.5,seconds);
second.spin(reverse);
Drivetrain.driveFor(9,inches);
wait(.5,seconds);
//hi (:
Drivetrain.turnFor(65,degrees);
//i love you so much
 Drivetrain.driveFor(20,inches);
 wait(.5,seconds);
 Drivetrain.turnFor(32,degrees);
 matchloads.set(true);
 wait(.5,seconds);
 Drivetrain.driveFor(10.5,inches);
 wait(1,seconds);
  Drivetrain.driveFor(reverse, 19,inches);
  front.spin(reverse);
  Drivetrain.setDriveVelocity(75,percent);
  wait(4,seconds);
Drivetrain.driveFor(3,inches);
Drivetrain.driveFor(reverse, 4,inches);
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}
//elf on the self
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
   
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}


































//If you here, 



























//whatchu doing twin

















































//stupid ninja

















































//go away





























//fredrick douglass





























//more like freakin dark lass







































//by: Abdullah