#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,root1,root2,det,real_root,img_root;


    printf("ENTER a:");
    scanf("%f",&a);

    printf("ENTER b:");
    scanf("%f",&b);

    printf("ENTER c:");
    scanf("%f",&c);

    det=sqrt((b*b)-(4*a*c));


    if (det>0)
    {
      root1=((-b)+det)/(2*a);
      root2=((-b)-det)/(2*a);

      printf("The first root of the quadratic equation is: %.2f\n",root1);
      printf("The second root of the quadratic equation is: %.2f\n",root2);
    }

    else if(det==0)
    {
        root1=(-b)/(2*a);
        root2=(-b)/(2*a);
        printf("The first root is: %.2f\n",root1);
        printf("The second root is: %.2f\n",root2);
    }

    else
    {
        real_root=(-b/(2*a));
        img_root=(det/(2*a));

         printf("COMPLEX ROOTS\n");

    }

    return 0;

}
