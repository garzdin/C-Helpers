#include <stdio.h>
#include <time.h>

int main() {
  char datetime[] = "2016-08-11T12:45:22";
  struct tm tm;
  time_t epoch;
  if (strptime(datetime, "%Y-%m-%dT%H:%M:%S", &tm) != NULL) {
    epoch = mktime(&tm);
    printf("Day: %d | Month: %d | Year: %d | Hour: %d | Minute: %d | Seconds: %d\n", tm.tm_mday, tm.tm_mon + 1, 1900 + tm.tm_year, tm.tm_hour - 1, tm.tm_min, tm.tm_sec);
    printf("Epoch: %lld\n", (long long) epoch);
  }
}
