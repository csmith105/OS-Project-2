//Zack Foreman
//Created: 03/28/2016 Modified: 03/28/2016
//Fixed-point.h

static int f = (1 << 14);

int ConvFP(float n)
{
	return (n * f);	
}

int FPtoIntZ(int x)
{
	return (x / f);
}

int FPtoIntN(int x)
{
	if(x >= 0)
	{
		return ((x +(f/2))/f); 
	}
	else
	{
		return ((x-(f/2))/f);
	}
}

int AddFP(int x, int y)
{
	return (x + y);
}

int SubFP(int x, int y)
{
	return (x-y);
}

int AddFPtoInt(float n, int x)
{
	return (x+(n*f));
}

int SubFPtoInt(float n, int x)
{
	return (x-(n*f));
}

int MultFP(int x, int y)
{
	return ((((int64_t)x) * y)/f);
}

int MultFPtoInt(int x, float n)
{
	return (x * n);
}

int DivFP(int x, int y)
{
	return ((((int64_t)x)*f)/y);
}

int DivFPtoInt(int x, float n)
{
	return (x/n);
}
