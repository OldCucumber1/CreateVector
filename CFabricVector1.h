#pragma once

#include "CFabricVector.h"
#include "CVector1.h"

class CFabricVector1 : public CFabricVector
{
public:
	CVector* makeCVector(string str) override;
};
