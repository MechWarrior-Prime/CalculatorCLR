#include <stdlib.h>
#include <ctime>

using namespace System;
using namespace System::Text;

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

String^ Randoms(unsigned amount, unsigned  largest) {
	StringBuilder^ sb = gcnew StringBuilder;
	for (unsigned i = 1; i <= amount; i++) {
		sb->Append((1 + (rand() % largest)).ToString() + " ");
		//printf("%d ", 1 + (rand() % largest));
	}
	return sb->ToString();
}