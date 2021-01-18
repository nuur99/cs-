	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	
	int main()
	{
	  int f_cp;
	  while(f_cp >= 0)
	  {
	  int f;
	  f_cp = 0;
	  int fac = 1;
	  printf("Number to computewr the factorial of: ");
	  scanf("%d", &f);
	  f_cp = f;
	  while(f > 0)
	  {
	    fac = fac * f;
	    f--;
	  }
	  if (f_cp >= 0){
	  printf("%d! = %d\n", f_cp, fac);
	  }else{
	  printf("exit beacuse illagl input");
	  }
	  }
	}
