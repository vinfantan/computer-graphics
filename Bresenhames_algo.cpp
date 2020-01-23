#include<graphics.h>
#include<stdio.h>

main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2,dx,dy,x,y,p0;
    printf("enter 1st coordinate\n");
    scanf("%d%d",&x1,&y1);
    printf("enter 2st coordinate\n");
    scanf("%d%d",&x2,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy){
     printf("\n here m is equal or less than 1 (m is equal or less than 45 degree)\n");
    p0=2*dy-dx;
    x=x1;
    y=y1;
    initgraph(&gd,&gm,"");
    while(x<=x2)
    {
        putpixel(x,y,2);
        printf("\n%d\t%d",x,y);
        x++;
        if(p0<0)
        {
            p0=p0+2*dy;
        }
        else{
            y++;
            p0=p0+2*dy-2*dx;
        }
    }
}

   else{
        printf("\n here m is  greater than 1 (m is more than 45 degree)\n");
    p0=2*dx-dy;
    x=x1;
    y=y1;
    initgraph(&gd,&gm,"");
    while(y<=y2)
    {
        putpixel(x,y,2);
        printf("\n%d\t%d",x,y);
        y++;
        if(p0<0)
        {
            p0=p0+2*dx;
        }
        else{
            x++;
            p0=p0+2*dx-2*dy;
        }
    }
}

    getch();
    closegraph();
}
