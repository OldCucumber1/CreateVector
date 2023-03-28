#include "CreateVector.h"
#include "autoTest.h"

int main()
{
	string inputFileName;
    //std::cout << "Enter inputFileName:" << endl;
    //std::cin >> inputFileName;
    ifstream inputFile("inputFile.txt");
	CFabricVector0 fabric0;
	CFabricVector1 fabric1;
    CFabricVector* masCFabricVectorPtr[2];
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
             delete createdVectorPtr;
		}
	}
    string a = "autoTestFile.txt";
    //cout << "Enter testLileName:" << endl;
    //cin >> a;
	autoTest(a);
    CVector0 aa;
    aa.setNewCoordinate(1.0);
    aa.setNewCoordinate(2.0);
    CVector1 bb;
    bb.setNewCoordinate(3.0);
    bb.setNewCoordinate(4.0);
    CVector0 cc;
    cc = bb + aa;
    cc.output("c_out.txt");

	return 0;
}
