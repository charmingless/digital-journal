#include <stdio.h>
#include <time.h>

/* 
 * Таблица 1 "Работа судна за сутки":
 * 	1.1 - номер рейса (tripnum);
 * 	1.2 - пункт остановки (stopoint);
 * 	1.3 - время прибытия (arrtime);
 * 	1.4 - время отправления (deptime);
 * 	1.5 - число пассажиров/количество грузов (pasngnum/cargonum);
 * 	1.6 - осадка судна (vesdradt).
 */
struct table1
{
	char tripnum[16], stopoint[16];
	time_t arrtime, deptime;
	int pasngnum;
	float vesdraft;
};

int
main()
{
	scanf("%c, %c, %ld, %ld, %d, %f\n" \
	       &table1.tripnum, &table1.stoppoint, &table1.arrtime \
	       &table1.deptime, &table1.pasngnum, &table1.vesdraft);
	printf("Номер рейса: %c;\n Пункт оставновки: %c;\n Время прибытия: %ld;\n \
		Время отправления: %ld;\n Число пассажиров: %d;\n Осадка судна: %f;\n"
		table1.tripnum, table1.stoppoint, table1.arrtime \                                  
		table1.deptime, table1.pasngnum, table1.vesdraft);

	return 0;
}
