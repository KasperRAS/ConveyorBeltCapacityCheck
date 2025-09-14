#include <stdio.h>

int main(void) {
  const double CAP = 5.6, EPS = 1e-9;
  char again = 'y';

  while (again == 'y' || again == 'Y') {
    unsigned int motors = 0;
    double kg = 0.0;

    printf("%s", "How many motors are carrying the packages? ");
    if (scanf("%u", &motors) != 1 || motors == 0) {
      puts("No. The conveyor belt cannot carry the packages.");
    } else {
      printf("%s", "How many kg of packages do we expect? ");
      if (scanf("%lf", &kg) != 1 || kg < 0.0) {
        puts("No. The conveyor belt cannot carry the packages.");
      } else if (kg <= CAP * motors + EPS) {
        puts("Yes! The conveyor belt can carry the packages.");
      } else {
        puts("No. The conveyor belt cannot carry the packages.");
      }
    }

    printf("%s", "Run another check? (y/n): ");
    if (scanf(" %c", &again) != 1) again = 'n';
  }
  return 0;
}
