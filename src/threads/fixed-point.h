//Zack Foreman
//Created: 03/28/2016 Modified: 03/28/2016
//Fixed-point.h

#define f 16384

#define ConvFP(n) (n * f)

#define FPtoIntZ(x) (x/f)

#define FPtoIntN(x) ((x >= 0) ? ((x + (f/2))/f) : ((x-(f/2)) /f))

#define AddFP(x, y) (x + y)

#define SubFP(x, y) (x-y)

#define AddFPtoInt(n, x) (x + (n * f))

#define SubFPtoInt(n, x) (x - (n *f))

#define MultFP(x, y) ((int64_t)x * y/f)

#define MultFPtoInt(x, n) (x * n)

#define DivFP(x, y) ((int64_t)x*f/y)

#define DivFPtoInt(x, n) (x/n)
/*
static int f = (1 << 14);

int64_t ConvFP(int n) {
	return ((n * f));
}

int64_t FPtoIntZ(int64_t x) {
	return x / f;
}

int64_t FPtoIntN(int64_t x) {
	return (x >= 0) ? ((x + (f/2)) / f) : ((x - (f/2)) / f);
}

int64_t AddFP(int x, int y) {
	return x + y;
}

int64_t SubFP(int x, int y) {
	return x- y;
}

int64_t AddFPtoInt(int n, int64_t x) {
	return x + ConvFP(n);
}

int64_t SubFPtoInt(int n, int64_t x) {
	return x - ConvFP(n);
}

int64_t MultFP(int x, int y) {
	return (((int64_t) x) * y) / f;
}

int MultFPtoInt(int x, int n) {
	return (x * n);
}

int64_t DivFP(int x, int y) {
	return (((int64_t) x) * f) / y;
}

int64_t DivFPtoInt(int x, int n) {
	return (x / n);
}
*/
