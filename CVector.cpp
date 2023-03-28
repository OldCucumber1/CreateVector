#include "CVector.h"

CVector::CVector()
{
	maxSizeVector = 0;
	currentSizeVector = 0;
	vectorPtr = nullptr;
}
CVector::CVector(const CVector& val)
{
	maxSizeVector = val.maxSizeVector;
	currentSizeVector = val.currentSizeVector;
	vectorPtr = new double[maxSizeVector];
	for(int i=0; i<currentSizeVector;++i)
	{
	  vectorPtr[i] = val.vectorPtr[i];
	}
	
}
CVector::~CVector()
{
	outFileName = "";
	maxSizeVector = 0;
	currentSizeVector = 0;
	if(vectorPtr) delete[] vectorPtr;
	vectorPtr = nullptr;
}

void CVector::setOutFileName(const string& FileName)
{
	outFileName = FileName;
}

void CVector::setNewCoordinate(double valueNewCoordinate)
{
	if (vectorPtr == nullptr)
	{
		vectorPtr = new double[5];
		*vectorPtr = valueNewCoordinate;
		maxSizeVector = 5;
		currentSizeVector = 1;
	}
	else if (maxSizeVector == currentSizeVector)
	{
		double* tempVectorPtr = vectorPtr;
		maxSizeVector *= 2;
		currentSizeVector++;
		vectorPtr = new double[maxSizeVector];
		for (int i = 0; i < currentSizeVector - 1; ++i)
		{
			vectorPtr[i] = tempVectorPtr[i];
		}
		vectorPtr[currentSizeVector - 1] = valueNewCoordinate;
		delete[] tempVectorPtr;
	}
	else
	{
		vectorPtr[currentSizeVector] = valueNewCoordinate;
		currentSizeVector++;
	}
}

string CVector::getOutFileName() const
{
    return outFileName;
}

int CVector::getMaxSizeVector() const
{
	return maxSizeVector;
}

int CVector::getCurrentSizeVector() const
{
	return currentSizeVector;
}

double* CVector::getVectorPtr() const
{
	return vectorPtr;
}

double CVector::getCoordinate(int numberCoordinate)
{
	if (numberCoordinate > currentSizeVector || numberCoordinate <= 0)
	{
		throw ("NumberCoordinate is invalided");
	}
	else
	{
		return vectorPtr[numberCoordinate - 1];
	}
}

void CVector::operator=(const CVector& anotherVector)
{
	if (vectorPtr != nullptr)
	{
		delete[] vectorPtr;
	}
	outFileName = anotherVector.outFileName;
	maxSizeVector = anotherVector.maxSizeVector;
	currentSizeVector = anotherVector.currentSizeVector;
	currentSizeVector = 0;
	if (anotherVector.vectorPtr == nullptr)
	{
		vectorPtr = nullptr;
	}
	else
	{
		vectorPtr = new double[maxSizeVector];
		for (int i = 0; i < currentSizeVector; ++i)
		{
			vectorPtr[i] = anotherVector.vectorPtr[i];
		}
	}
}

double CVector::scalarProduct(const CVector& anotherVector)
{
	if (vectorPtr == nullptr || anotherVector.vectorPtr == nullptr || currentSizeVector != anotherVector.currentSizeVector)
	{
		throw ("blablabla");
	}
	else
	{
		double valueScalarProduct = 0;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			valueScalarProduct += vectorPtr[i] * anotherVector.vectorPtr[i];
		}
		return valueScalarProduct;
	}
}
