#include <stdio.h>
#include <unistd.h>

int main() {
	int count = 0; 
	while (count < 5) {
		printf("Background process is running... %d\n", count+1);
		sleep (2);
		count++; 
	}
	printf("Background process is complete.");
	return 0;
}
