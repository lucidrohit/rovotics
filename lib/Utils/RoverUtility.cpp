#include "RoverUtility.h"



RoverControl RoverUtility::calculateControl(double alpha, double Vc) {
  const double L = 0.5 * CHASSIS_LENGTH; // Bicycle Length (0.5 * Chassis Length)
  const double d = 0.5 * CHASSIS_WIDTH; // 0.5 * Chassis Width
  const double Rw = WHEEL_RADIUS; // Radius of the wheel
  const double Ld = LOOK_AHEAD_DISTANCE; // Look ahead distance for Pure Pursuit

  // Calculate bicycle steering angle and turn radius
  double delta = atan(2 * L * sin(alpha) / Ld);
  double R = L / tan(delta);

  // Calculate individual steering angles
  double deltaLF = atan(L / (R - d));
  double deltaRF = atan(L / (R + d));
  double deltaLM = 0;
  double deltaRM = 0;
  double deltaLB = -deltaLF;
  double deltaRB = -deltaRF;
  double deltaLB = -deltaLF;
  double deltaRB = -deltaRF;

  // Calculate wheel speeds
  double omegaLF = Vc / Rw * sqrt(L * L + pow(R - d, 2)) / R;
  double omegaRF = Vc / Rw * sqrt(L * L + pow(R + d, 2)) / R;
  double omegaLM = Vc / Rw * (R - d) / R;
  double omegaRM = Vc / Rw * (R + d) / R;
  double omegaLB = omegaLF;
  double omegaRB = omegaRF;

  // Return the steering angles and wheel speeds
  return {deltaLF, deltaRF, deltaLB, deltaRB, omegaLF, omegaRF, omegaLM, omegaRM, omegaLB, omegaRB};
}