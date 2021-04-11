#pragma once
#define TEXTURE_WIDTH  2
#define TEXTURE_HEIGHT 2
#include <cstdint>

uint32_t TextureData[] =
{
    0xffffffff, 0xff7f7f7f,
    0xff7f7f7f, 0xffffffff,
};

float VertexData[] = 
{
	// float3 position, float3 normal,	float2 texcoord,	float3 color
	-1, -1, 0,			0, 0, 1,		0, 0,				0, 1, 0,
	1, -1, 0,			0, 0, 1,		0, 0,				1, 1, 1,
	1, 1, 0,			0, 0, 1,		0, 0,				1, 0, 0,
	-1, 1, 0,			0, 0, 1,		0, 0,				1, 1, 1,
};

UINT IndexData[] = {0, 2, 1, 0, 3, 2};