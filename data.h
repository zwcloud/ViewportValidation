#pragma once
#include <cstdint>

#ifdef TRIANGLE
float VertexData[] = 
{
	// float3 position, float3 color
	-0.5, -0.5, 0,			1, 0, 0,
	0.5, -0.5, 0,			0, 1, 0,
	0, 0.5, 0,				0, 0, 1,
};

uint32_t IndexData[] = {0, 2, 1};
#else
float VertexData[] = 
{
	// float3 position, float3 color
	-1, -1, 0,			0, 1, 0,
	1, -1, 0,			1, 1, 1,
	1, 1, 0,			1, 0, 0,
	-1, 1, 0,			1, 1, 1,
};

uint32_t IndexData[] = {0, 2, 1, 0, 3, 2};
#endif