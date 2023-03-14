#include "CFabricVector1.h"

CVector* CFabricVector1::makeCVector(string str)
{
	CVector* createdVectorPtr = new CVector1;
	istrstream tempStream(str.c_str());
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

