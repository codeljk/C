#include "saolei.h"

int main(void)
{
	menu();

	int input;
	scanf_s("%d", &input);
	while (input) {
		if (input == 1) {
			game();
			break;
		}
	}

	return 0;
}