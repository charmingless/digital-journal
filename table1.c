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
struct table1 {
	int tripnum, pasngnum;
	char stopoint[3];
	time_t arrtime, deptime;
	float vesdraft;
};

int
main()
{
	struct table1 table1;
	FILE* db;
	db = fopen("table1.csv", "a");

	scanf("%d%s%lld%lld%d%f", &table1.tripnum, table1.stopoint, &table1.arrtime, &table1.deptime, &table1.pasngnum, &table1.vesdraft);
	fprintf(db, "%d,%s,%lld,%lld,%d,%.2f\n", table1.tripnum, table1.stopoint, table1.arrtime, table1.deptime, table1.pasngnum, table1.vesdraft);

	fclose(db);
	return 0;
}
