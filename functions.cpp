using namespace System;

UInt64 faculty(unsigned int n)
{
	if (n == 0)
		return 1;
	else
		return n * faculty(n - 1);
}

int fibunacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibunacci(n - 1) + fibunacci(n - 2);
}

bool IsNumeric(String^ text) {
	double test;
	return double::TryParse(text, test);
}