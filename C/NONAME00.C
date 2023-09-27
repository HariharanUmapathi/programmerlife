#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include  <math.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;
   clrscr();
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());

   /* draw a diagonal line */
   line(100, 100, 50,50 );
   line(100,100,150,180);

    circle(100,100,100);
   /* clean up */
   getch();
   closegraph();
   return 0;
}

