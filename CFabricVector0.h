#pragma once

#include "CFabricVector.h"
#include "CVector0.h"

class CFabricVector0 : public CFabricVector
{
public:
	CVector* makeCVector(string str) override;
};
