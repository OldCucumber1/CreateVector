#pragma once

#include "CVector.h"
#include "CVector0.h"

class CVector1 : public CVector
{
public:

	CVector1 operator+ (const CVector1& anotherVector);
        CVector1 operator+ (const CVector0& anotherVector);
	CVector1 operator- (const CVector1& anotherVector);
        CVector1 operator- (const CVector0& anotherVector);
	int output(string fileName) override;
};

