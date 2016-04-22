#include <stdio.h>

static int days_tab[2][13] = {
  { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  },
  { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  }
};

int isleapyear(int year) {
  return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}

/* Example: month_day(1988, 60, &m, &d) -> m = 2, d = 28 */
void month_day(int year, int yearday, int *pmonth, int *pds) {
  int *days = days_tab[isleapyear(year)];
  int days_total = 0;
  int days_to_subtract = 0;


  int i;
  for (i = 0; yearday > days_total; i++, days_total += days[i]) {
    days_to_subtract = days_total + 1;
  }

  *pmonth = i;
  *pds = days_total - days_to_subtract;
}

int main() {
  int m, d;
  month_day(1988, 60, &m, &d);

  printf("%d/%d\n", m, d);
  return 0;
}
