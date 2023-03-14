#pragma once

#include "CFabricVector0.h"
#include "CFabricVector1.h"

CVector* CreateVector(string lineInputFile, CFabricVector** f)
{
	istrstream tempStream(lineInputFile.c_str());
	int i;
	tempStream >> i;
	string outFileNameAndData;
	std::getline(tempStream, outFileNameAndData);
	CVector* createdVector = f[i]->makeCVector(outFileNameAndData);
	return createdVector;
}
 
