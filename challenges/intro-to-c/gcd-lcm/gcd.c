/// Implementation
int gcd(int a, int b)
{
	while (a % b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	
	printf("%d", gcd(num1, num2));
	return 0;
}