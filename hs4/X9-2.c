struct complex multiply(struct complex x, struct complex y)
{
	struct complex k;
	k.real = x.real*y.real - x.imag*y.imag;
	k.imag = x.imag*y.real + x.real*y.imag;
	return k;
}
