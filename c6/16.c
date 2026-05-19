#include <stdio.h>

int main(void)
{
	float daphne_initial_invest = 100;
	float daphne_final_invest = daphne_initial_invest;

	float deirdre_initial_invest = 100;
	float deirdre_final_invest = deirdre_initial_invest;

	int year = 1;

	while (deirdre_final_invest <= daphne_final_invest)
	{
		daphne_final_invest += daphne_initial_invest * 0.1;

		deirdre_final_invest = (1 + 0.05) * deirdre_final_invest;
		printf("After %d year, Daphne has %.2f, Deirdre has %.2f \n", year, daphne_final_invest, deirdre_final_invest);
		year++;
	}

	printf("It will wait %d years when Deirdre investment exceed Daphne investment. At that time,"
		"Deirdre has %.2f and Daphne has %.2f", year, daphne_final_invest, deirdre_final_invest);

}