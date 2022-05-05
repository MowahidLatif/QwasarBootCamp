
#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);

char detonation_in(int seconds_left){
    printf("detonation in... %d secondes.\n", seconds_left);
}

int main(){
  int timer = 10;

  while (timer > .10) {
    detonation_in(timer);
    timer = timer - .10;
  }
  return 0;
}