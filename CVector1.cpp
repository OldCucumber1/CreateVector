#include "CVector1.h"
#include "CVector0.h"

CVector1 CVector1::operator+(const CVector1& anotherVector)
{
	if (currentSizeVector != anotherVector.currentSizeVector || vectorPtr == nullptr || anotherVector.vectorPtr == nullptr)
	{
		throw std::runtime_error("Error: \n");
	}
	else
	{
		CVector1 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] + anotherVector.vectorPtr[i]);
		}
		return resultVector;
	}
}

CVector1 CVector1::operator+(const CVector0& anotherVector)
{
	if (currentSizeVector != anotherVector.getCurrentSizeVector() || vectorPtr == nullptr || anotherVector.getVectorPtr() == nullptr)
	{
		throw std::runtime_error("Error: \n");
	}
	else
	{
		CVector1 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] + anotherVector.getVectorPtr()[i]);
		}
		return resultVector;
	}
}

CVector1 CVector1::operator-(const CVector1& anotherVector)
{
	if (currentSizeVector != anotherVector.currentSizeVector || vectorPtr == nullptr || anotherVector.vectorPtr == nullptr)
	{
		throw ("blablabla");
	}
	else
	{
		CVector1 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] - anotherVector.vectorPtr[i]);
		}
		return resultVector;
	}
}

CVector1 CVector1::operator-(const CVector0& anotherVector)
{
	if (currentSizeVector != anotherVector.getCurrentSizeVector() || vectorPtr == nullptr || anotherVector.getVectorPtr() == nullptr)
	{
		throw ("blablabla");
	}
	else
	{
		CVector1 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] - anotherVector.getVectorPtr()[i]);
		}
		return resultVector;
	}
}

int CVector1::output(string fileName)
{
	if (fileName == "")
	{
		fileName = outFileName;
	}
	ofstream outFile;
	outFile.open(outFileName);
	if (!outFile.is_open())
	{
		return 1;
	}
	for (int i = 0; i < currentSizeVector; ++i)
	{
		outFile << vectorPtr[i] << endl;
	}
	return 0;
}

