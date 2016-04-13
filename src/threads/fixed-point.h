//Zack Foreman
//Created: 03/28/2016 Modified: 03/28/2016
//Fixed-point.h

static int f = (1 << 14);

int ConvFP(int d, int n) {

	return ((n * f)/d);

}

int FPtoIntZ(int x) {

	return x / f;

}

int FPtoIntN(int x) {

	return (x >= 0) ? ((x + (f/2)) / f) : ((x - (f/2)) / f);

}

int AddFP(int x, int y) {

	return x + y;

}

int SubFP(int x, int y) {

	return x- y;

}

int AddFPtoInt(int n, int d, int x) {

	return x + ConvFP(d, n);

}

int SubFPtoInt(int n, int d, int x) {

	return x - ConvFP(d, n);

}

int MultFP(int x, int y) {

	return (((int64_t) x) * y) / f;

}

int MultFPtoInt(int x, int n, int d) {

	return (x * ConvFP(d, n));

}

int DivFP(int x, int y) {

	return (((int64_t) x) * f) / y;

}

int DivFPtoInt(int x, int n, int d) {

	return (x / ConvFP(d, n));

}
