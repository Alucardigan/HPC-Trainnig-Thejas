/// Implementation
int fib_func(int a, int b) 
{
	return a + b;
}

int main() {
	int var = 0;
	printf("%d ", var);
	int var2 = var + 1;
	for (int i = 0; i < 10; i++) {
		printf("%d ", var2);
		int var3 = var2;// temp storage
		var2 = fib_func(var, var2);
		var = var3;
	}
}