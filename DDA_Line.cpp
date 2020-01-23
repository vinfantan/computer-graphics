#include<graphics.h>
#include<stdio.h>
int integer(float x)
{
    x=x+0.5;
    return x;

}
main()
{
  int gd=0,gm;
  int xi,yi,x1,y1,x2,y2,dx,dy,i,step;
   float x,y,xinc,yinc;
initgraph(&gd,&gm,"");
  printf("enter 1st coordinate\n");
  scanf("%d%d",&x1,&y1);
  printf("enter 2nd coordinate\n");
  scanf("%d%d",&x2,&y2);
  x=x1;
  y=y1;
  xi=x1;
  yi=y1;
  dx=abs(x2-x1);
  dy=abs(y2-y1);
  if(dx>dy)
  {
      step=dx;
  }
  else{
    step=dy;
  }
  xinc=(dx/(float)step);
  yinc=(dy/(float)step);
  printf("\n%f\t %f\t step=%d\n",xinc,yinc,step);
  for(i=0;i<=step;i++)
  {
    putpixel(xi,yi,3);
    printf("\n %d\t%d",xi,yi);
      x=x+xinc;
      y=y+yinc;
      xi=integer(x);
      yi=integer(y);
      delay(100);

  }
  getch();
 closegraph();
}
