#include<stdio.h>
int main(){
   float n,n1,n2,n3,total,gst;
   char out;
    printf(" Welcome To Royal Sandwich \nEnter the type of sandwich \n ");
    scanf("%c",&out);
    switch(out)
    {
        case 'N':
                 printf("enter the quantity of sandwich");
                 scanf("%f",&n);
                 printf("The price of Normal Sandwich is 80/piece");
                 total=n*80;
                 gst=0.03*total;
                 printf("\nthe total amount of %f Normal sandwich including 3 percent gst is %f\n",n,total+gst);
                  printf("Thank you visit again");
                 break;

        case 'B':
                 printf("enter the quantity of sandwich");
                 scanf("%f",&n);
                 printf("The price of Bread Butter Sandwich is 90/piece\n");
                 total=n*90;
                 gst=0.03*total;
                 printf("total amount of %f  Butter sandwich including 3 percent gstis %f\n",n,total+gst);
                  printf("Thank you visit again");
                 break;

        case 'J':
                 printf("enter the quantity of sandwich");
                 scanf("%f",&n);
                 printf("The price of Veg Junglee Sandwich is 100/piece\n");
                 total=n*100;
                 gst=0.03*total;
                 printf("total amount of %f  Junglee sandwich including 3 percent gst is %f\n",n,total+gst);
                 printf("Thank you visit again");
                 break;
         case 'A':
                 printf("enter the quantity of Normal,Butter and junglee  sandwich");
                 scanf("%f%f%f",&n1,&n2,&n3);
                 printf("The price of Nomal,Bread Butter,junglee Sandwich is 80,90,100/piece\n");
                 total=(n1*80)+(n2*90)+(n3*100);
                 gst=0.03*total;
                 printf("total amount of %f Normal sandwich %f Butter sandwich %f junglee sandwich including 3 percent gst is %f\n",n1,n2,n3,total+gst);
                  printf("Thank you visit again");
                 break;

        default:
                printf("Invalid input");

    }
    return 0;

}
