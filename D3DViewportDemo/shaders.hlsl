struct vs_in
{
    float3 position : POS;
    float3 color    : COL;
};

struct vs_out
{
    float4 position : SV_POSITION;
    float4 color    : COL;
};

vs_out vs_main(vs_in input)
{
    vs_out output;
    output.position = float4(input.position.xy, 0, 1);
	output.color = float4(input.color, 1);

    return output;
}

float4 ps_main(vs_out input) : SV_TARGET
{
	return input.color;
}