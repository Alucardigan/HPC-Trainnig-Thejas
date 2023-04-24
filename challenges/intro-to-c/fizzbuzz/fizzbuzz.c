/// Implementation
int main()
{
	for (int i = 0; i <= 100; i++) {
		printf("%d", i);
		if(i == 0){
		}
		else if (i % 3 == 0 && i % 5 == 0) {
			puts("FizzBuzz");
		}
		else if(i%3==0){
			puts("Fizz");
		}
		else if (i % 5 == 0) {
			puts("Buzz");
		}
		puts("\n");
	}
	return 0;
}