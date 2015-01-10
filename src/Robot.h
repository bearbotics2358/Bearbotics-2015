#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "WPILib.h"

class Robot : public IterativeRobot {
public:
  Robot();

  void RobotInit();
  void AutonomousInit();
  void AutonomousPeriodic();
  void TeleopInit();
  void TeleopPeriodic();
  void TestPeriodic();

private:
};

#endif // _ROBOT_H_
