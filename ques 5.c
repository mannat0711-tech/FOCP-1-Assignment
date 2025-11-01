/*Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
game development and robotics navigation*/
#include<stdio.h>
int main()
{
  int x,y;
printf("Enter the (x,y) co-ordinates:");
scanf("%d%d",&x,&y);
if (x==0,y==0)
  {
        printf("Co-ordinates lies on the origin \n");
    }
    else if (y == 0)
    {
        printf("Co-ordinates lies on the X-axis \n");
    }
    else if (x == 0)
    {
 printf("Co-ordinates lies on the Y-axis \n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Co-ordinates lies in the 1st Quadrant \n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Co-ordinates lies in the 2nd Quadrant \n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Co-ordinates lies in the 3rd Quadrant \n");
    }
    else
    {
        printf("Co-ordinates lies in the 4th Quadrant \n");
    }
    return 0;
}
