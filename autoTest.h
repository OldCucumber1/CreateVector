#pragma once
#include <ctime>

void autoTest(string testFile)
{
	srand((unsigned) time(NULL));
	ofstream file;
	file.open(testFile);
	CVector0 vector_type0_1;
	CVector0 vector_type0_2;
	CVector1 vector_type1_1;
	int sizeVectors = rand() % 20 + 1;
	for (int i = 0; i < sizeVectors; ++i)
	{
		vector_type0_1.setNewCoordinate(rand() % 100);
		vector_type0_2.setNewCoordinate(rand() % 100);
		vector_type1_1.setNewCoordinate(rand() % 100);
	}
	file << "VECTOR_TYPE0_1" << endl << endl;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << vector_type0_1.getCoordinate(i) << " ";
	}
	file << endl << endl << "VECTOR_TYPE0_2" << endl << endl;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << vector_type0_2.getCoordinate(i) << " ";
	}
	file << endl << endl << "VECTOR_TYPE1_1" << endl << endl;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << vector_type1_1.getCoordinate(i) << " ";
	}
	file << endl << endl << "SUMVECTORS_TYPE0" << endl << endl;
	CVector0 sumVectors_type0 = vector_type0_1 + vector_type0_2;
	CVector0 diffVectors_type0 = vector_type0_1 - vector_type0_2;
	CVector0 sumVectors_bouthtypes = vector_type0_1 + vector_type1_1;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << sumVectors_type0.getCoordinate(i) << " ";
	}
	file << endl << endl << "DIFFVECTORS_TYPE0" << endl << endl;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << diffVectors_type0.getCoordinate(i) << " ";
	}
	file << endl << endl << "SUMVECTORS_BOUTHTIPES" << endl << endl;
	for (int i = 1; i <= sizeVectors; ++i)
	{
		file << sumVectors_bouthtypes.getCoordinate(i) << " ";
	}
	file << endl << endl << "SCALARPRODUCT_TYPE0" << endl << endl << vector_type0_1.scalarProduct(vector_type0_2);
}
