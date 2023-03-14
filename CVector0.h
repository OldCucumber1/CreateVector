#pragma once

#include "CVector.h"

class CVector1;


class CVector0 : public CVector
{
public:
	CVector0 operator+ (const CVector0& anotherVector);
        CVector0 operator+ (const CVector1& anotherVector);
	CVector0 operator- (const CVector0& anotherVector);
        CVector0 operator- (const CVector1& anotherVector);
	int output(string fileName) override;	
};
