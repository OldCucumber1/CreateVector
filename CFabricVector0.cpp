#include "CFabricVector0.h"

CVector* CFabricVector0::makeCVector(string outFileNameAndData)
{
	CVector* createdVectorPtr = new CVector0;
	istrstream tempStream(outFileNameAndData.c_str());
	string outFileName;
	tempStream >> outFileName;
	createdVectorPtr->setOutFileName(outFileName);
	double valueCoordinateVector;
	while (tempStream >> valueCoordinateVector)
	{
		createdVectorPtr->setNewCoordinate(valueCoordinateVector);
	}
	return createdVectorPtr;
}

