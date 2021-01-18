#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
  int numSteps;
  do{
  char c = '/';
  int j;
  int numSpaces;
  double sinVal;
  double angle;
  numSteps = 0;
  printf("Input the number of steps: ");
  scanf("%d", &numSteps);
  double maxAngle = M_PI * 2;
  int i;
  if(numSteps > 2){
  for(i = 0; i<=numSteps; i++)
  {
    angle = (double)i / (double)numSteps * maxAngle;
    sinVal = sin(angle);
    printf("%3d: %5.2f %f", i, angle, sinVal);
    numSpaces = 30 + 30 * sinVal;
    for(j = 0; j<numSpaces; j++)
    {
      printf(" ");
    }
    if(fabs(sinVal) == 1.0)
    {
    printf("*\n");
    }else{
    printf("%c\n", c);
    }
  }
 }
  }while(numSteps < 2);
}
