#include "CVector0.h"
#include "CVector1.h"



CVector0::CVector0(const CVector1 &anotherVector)
{
    *this = anotherVector;
}

CVector0 CVector0::operator+(const CVector0& anotherVector)
{
	if (currentSizeVector != anotherVector.currentSizeVector || vectorPtr == nullptr || anotherVector.vectorPtr == nullptr)
	{
		throw std::runtime_error("Error: \n");
	}
	else
	{
		CVector0 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] + anotherVector.vectorPtr[i]);
		}
		return resultVector;
	}
}

CVector0 CVector0::operator+(const CVector1& anotherVector)
{
	if (currentSizeVector != anotherVector.getCurrentSizeVector() || vectorPtr == nullptr || anotherVector.getVectorPtr() == nullptr)
	{
		throw std::runtime_error("Error: \n");
	}
	else
	{
		CVector0 resultVector;
		
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] + anotherVector.getVectorPtr()[i]);
		}
		return resultVector;
	}
}

CVector0 CVector0::operator-(const CVector0& anotherVector)
{
	if (currentSizeVector != anotherVector.currentSizeVector || vectorPtr == nullptr || anotherVector.vectorPtr == nullptr)
	{
		throw ("blablabla");
	}
	else
	{
		CVector0 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] - anotherVector.vectorPtr[i]);
		}
		return resultVector;
	}
}

CVector0 CVector0::operator-(const CVector1& anotherVector)
{
	if (currentSizeVector != anotherVector.getCurrentSizeVector() || vectorPtr == nullptr || anotherVector.getVectorPtr() == nullptr)
	{
		throw ("blablabla");
	}
	else
	{
		CVector0 resultVector;
		for (int i = 0; i < currentSizeVector; ++i)
		{
			resultVector.setNewCoordinate(vectorPtr[i] - anotherVector.getVectorPtr()[i]);
		}
		return resultVector;
	}
}

CVector0& CVector0::operator=(const CVector1& anotherVector)
{
    if (vectorPtr != nullptr)
    {
        delete[] vectorPtr;
    }
    outFileName = anotherVector.getOutFileName();
    maxSizeVector = anotherVector.getMaxSizeVector();
    currentSizeVector = anotherVector.getCurrentSizeVector();
    currentSizeVector = 0;
    if (anotherVector.getVectorPtr() == nullptr)
    {
        vectorPtr = nullptr;
    }
    else
    {
        vectorPtr = new double[maxSizeVector];
        for (int i = 0; i < currentSizeVector; ++i)
        {
            vectorPtr[i] = anotherVector.getVectorPtr()[i];
        }
    }
    return *this;
}

int CVector0::output(string fileName)
{
	if (fileName == "")
	{
		fileName = outFileName;
	}
	ofstream outFile;
    outFile.open(fileName, std::ios::app);
	if (!outFile.is_open())
	{
		return 1;
	}
	for (int i = 0; i < currentSizeVector; ++i)
	{
		outFile << vectorPtr[i] << " ";
	}
    outFile << endl;
	return 0;
}
