

#ifndef MESH_OPERATORS
#define MESH_OPERATORS

#include "../demolish.h"

#include <vector>
#include <cmath>
#include <iostream>
#include <stdio.h>

namespace demolish {
	namespace operators {
	    void shiftMesh(
		    std::vector<iREAL> &xCoordinates,
		    std::vector<iREAL> &yCoordinates,
		    std::vector<iREAL> &zCoordinates,
		    iREAL center[3]);

		void scaleXYZ(
			std::vector<iREAL> &xCoordinates,
			std::vector<iREAL> &yCoordinates,
			std::vector<iREAL> &zCoordinates,
		    iREAL scale,
		    iREAL position[3]);

		void rotateX(
			std::vector<iREAL> &xCoordinates,
			std::vector<iREAL> &yCoordinates,
			std::vector<iREAL> &zCoordinates,
			iREAL alphaX);

		void rotateY(
			std::vector<iREAL> &xCoordinates,
			std::vector<iREAL> &yCoordinates,
			std::vector<iREAL> &zCoordinates,
			iREAL alphaY);

		void rotateZ(
			std::vector<iREAL> &xCoordinates,
			std::vector<iREAL> &yCoordinates,
			std::vector<iREAL> &zCoordinates,
			iREAL alphaZ);
  }
}

#endif 
