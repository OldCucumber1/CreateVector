#pragma once

#include "CVector.h"

class CFabricVector
{
public:
	virtual CVector* makeCVector(string str) = 0;
	virtual ~CFabricVector() = default;
};
