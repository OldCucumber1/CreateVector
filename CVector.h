#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <strstream>

using namespace std;

class CVector
{
protected:
	string outFileName;
	int maxSizeVector;
	int currentSizeVector;
	double* vectorPtr;
public:
	CVector();
	CVector(const CVector& val);
	virtual ~CVector();

	void setOutFileName(const string& FileName);

	void setNewCoordinate(double valueNewCoordinate);
	
	int getMaxSizeVector() const;

	int getCurrentSizeVector()const ;

	double* getVectorPtr() const;
	
	double getCoordinate(int numberCoordinate);
	
	void operator= (const CVector& anotherVector);
	
	double scalarProduct(const CVector& anotherVector);
	
	virtual int output(string fileName) = 0;
};
