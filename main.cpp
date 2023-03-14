#include "CreateVector.h"
#include "autoTest.h"

int main()
{
	string inputFileName;
	std::cout << "Enter inputFileName:" << endl;
	std::cin >> inputFileName;
	ifstream inputFile(inputFileName);
	CFabricVector0 fabric0;
	CFabricVector1 fabric1;
	CFabricVector** masCFabricVectorPtr = new CFabricVector*[2];
	masCFabricVectorPtr[0] = &fabric0;
	masCFabricVectorPtr[1] = &fabric1;
	if (!inputFile.is_open())
	{
		std::cout << "Error open inputFile" << endl;
	}
	else
	{
		CVector* createdVectorPtr;
		while (std::getline(inputFile, inputFileName))
		{
			 createdVectorPtr = CreateVector(inputFileName, masCFabricVectorPtr);
			 createdVectorPtr->output("");
		}
	}
	string a;
	cout << "Enter testLileName:" << endl;
	cin >> a;
	autoTest(a);
	return 0;
}
