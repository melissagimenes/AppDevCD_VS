#include "score.h"

void input_scores(int s[]) {

	int i, input = 0;
	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		scanf("%d", &input);
		s[i] = input;
	}
	printf("%d scores are given\n", i - 1);
}