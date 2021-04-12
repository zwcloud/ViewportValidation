#pragma once
#include <cstdint>

float VertexData[] = 
{
	// float3 position, float3 color
	-1, -1, 0,			0, 1, 0,
	1, -1, 0,			1, 1, 1,
	1, 1, 0,			1, 0, 0,
	-1, 1, 0,			1, 1, 1,
};

uint32_t IndexData[] = {0, 2, 1, 0, 3, 2};
