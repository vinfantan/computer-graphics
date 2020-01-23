#include<graphics.h>
#include<stdio.h>
void draw(int x0,int y0,int x,int y)
{
   SetPixel(x0+x,y0+y);
   SetPixel(x0+y,y0+x);
   SetPixel(x0-y,y0+x);
   SetPixel(x0+x,y0-y);
   SetPixel(x0-x,y0-y);
   SetPixel(x0-y,y0-x);
   SetPixel(x0-y,y0+x);
   SetPixel(x0-x,y0+y);
}
main()
{
    int gd=DETECT,gm;
    int x0,y0,x,y,p0,r;
    printf("enter coordinate of center \n");
    scanf("%d%d",&x0,&y0);
    printf("enter radiuds\n");
    scanf("%d%d",&r);
    y=r;
    x=0;
    p0=1-r;
    initgraph(&gd,&gm,"");
    while(x==y)
    {
       draw(x0,y0,x,y);
        x++;
        if(p0<0)
        {
            p0=p0+2*x+1;
        }
        else{
            p0=p0+2*x+1-2*y;
            y++;
        }
    }



    getch();
    closegraph();
}
