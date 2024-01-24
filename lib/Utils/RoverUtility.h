#ifndef ROVER_UTILITY_H
#define ROVER_UTILITY_H

#include "RoverConstants.h"
#include <math.h>

struct RoverControl {
  double deltaLF, deltaRF, deltaLB, deltaRB; // Steering angles
  double omegaLF, omegaRF, omegaLM, omegaRM, omegaLB, omegaRB; // Wheel speeds
};

class RoverUtility {
public:
  static RoverControl calculateControl(double alpha, double Vc);
};

#endif // ROVER_UTILITY_H