//https://www.geeksforgeeks.org/find-day-of-the-week-for-a-given-date/?fbclid=IwAR0Gs6MeFW3KrmO-laFWPwJvWOb81YI-w7CmGEABJTnw0Hmz7A6bJvC5Vww

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int	monthCode[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	char weekDayArr[][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int day, month, year, days, weekDay = 0, yearForFormula = 0;
	printf("Enter a day(1-31), month(1-12) and year:\n");
	scanf("%d", &day);
	scanf("%d", &month);
	scanf("%d", &year);
	if (day < 1 || day > 31 || month < 1 || month >12 || year < 0) {
        printf("Invalid date.\n");
		return 0;
	}
	bool leap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31; break;
	case 2: days = 28; break;
	case 4: case 6: case 9: case 11: days = 30; break;
	}
	if (leap) {
		switch (month)
		{
            case 2: days = 29; break;
		}
	}
	if (day > days) {
		day = day - days;
		if (month == 12) {
			month = 1;
			year++;
		}
		else {
			month++;
		}
	}
	yearForFormula = year;
	yearForFormula -= month < 3;
	weekDay = (yearForFormula + yearForFormula / 4 - yearForFormula / 100 + yearForFormula / 400 + monthCode[month - 1] + day) % 7;

    printf("%s", weekDayArr[weekDay]);
	return 0;
}
