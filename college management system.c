#include<stdio.h>
int main(){
    char name[10][10];
    int phy[3][3],j,i;
    int math[3][3];
    int chem[3][3];
    int USN[3];
    int tmp;
    

   


 //input the USN,name,physics,chemistry,maths marks    
   for(i=0;i<3;i++)
    {
            printf("enter USN of student %d: ",i+1);
            scanf("%d",&USN[i]);
            printf("enter the name of student %d: ",i+1);
            scanf("%s",name[i]);
        int k=0;
        for( j=0;j<3;j++)
        {
            printf("Enter the physics marks of student %d in IA %d: ",i+1,++k);
          scanf("%d",&phy[i][j]);
             printf("Enter the maths marks of student %d in IA %d: ",i+1,k);
          scanf("%d",&math[i][j]);
             printf("Enter the chemistry marks of student %d in IA %d: ",i+1,k);
          scanf("%d",&chem[i][j]);
        }
    }
    
    


    int phy1[3]; //physics  marks of student 1
    int phy2[3]; //physics  marks of student 2
    int phy3[3]; //physics  marks of student 3
    int chem1[3];
    int chem2[3];
    int chem3[3];
    int math1[3];
    int math2[3];
    int math3[3];

   //converting 3d array to 1d array for the purpose of sorting
    for(i=0;i<3;i++)
    {

        phy1[i]=phy[0][i];
        phy2[i]=phy[1][i];
        phy3[i]=phy[2][i];
        
        chem1[i]=chem[0][i];
       chem2[i]=chem[1][i];
        chem3[i]=chem[2][i];

         math1[i]=math[0][i];
       math2[i]=math[1][i];
        math3[i]=math[2][i];

    }


    

    

//sorting the marks of IA 1,IA2 and IA3
  for(i=0;i<3;i++)
  {
    for(j=i+1;j<3;j++)
    {
       if(phy1[i]<phy1[j])
       {
        tmp=phy1[i];
        phy1[i]=phy1[j];
        phy1[j]=tmp;
       }
       if(phy2[i]<phy2[j])
       {
        tmp=phy2[i];
        phy2[i]=phy2[j];
        phy2[j]=tmp;
       }
       if(phy3[i]<phy3[j])
       {
        tmp=phy3[i];
        phy3[i]=phy3[j];
        phy3[j]=tmp;
       }
       if(math1[i]<math1[j])
       {
        tmp=math1[i];
        math1[i]=math1[j];
        math1[j]=tmp;
       }
       if(math2[i]<math2[j])
       {
        tmp=math2[i];
        math2[i]=math2[j];
        math2[j]=tmp;
       }
       if(math3[i]<math3[j])
       {
        tmp=math3[i];
        math3[i]=math3[j];
        math3[j]=tmp;
       }
        if(chem1[i]<chem1[j])
       {
        tmp=chem1[i];
       chem1[i]=chem1[j];
        chem1[j]=tmp;
       }
       if(chem2[i]<chem2[j])
       {
        tmp=chem2[i];
       chem2[i]=chem2[j];
        chem2[j]=tmp;
       }
       if(chem3[i]<chem3[j])
       {
        tmp=chem3[i];
       chem3[i]=chem3[j];
        chem3[j]=tmp;
       }
    }
  }



 int ps1,ps2,ps3,cs1,cs2,cs3,ms1,ms2,ms3;
 int ts1,ts2,ts3;
 int highest;

//physics total marks (best of two IA's)
 ps1=phy1[0]+phy1[1]; // student 1
 ps2=phy2[0]+phy2[1]; // student 2
 ps3=phy3[0]+phy3[1]; //student 3
    
//maths total marks (best of two IA's)
 ms1=math1[0]+math1[1];
 ms2=math2[0]+math2[1];
 ms3=math3[0]+math3[1];

//chem total marks (best of two IA's)
 cs1=chem1[0]+chem1[1];
 cs2=chem2[0]+chem2[1];
 cs3=chem3[0]+chem3[1];

// total marks of student1,2,3.
 ts1=ps1+ms1+cs1;
 ts2=ps2+ms2+cs2;
 ts3=ps3+ms3+cs3;

// highest marks scored by student

int tmp1=1;
if(ts1>ts2&&ts1>ts3)
{
    highest=ts1;
  
}

 if(ts2>ts1&&ts2>ts3)
{
    tmp1=2;
    highest=ts2;
   
}

 if(ts3>ts2&&ts3>ts1)
{
    tmp1=3;
    highest=ts3;
   
}


//printing the final output
 printf("sl.no\tUSN\tName\t\tPhy\tChem\tMath\tTotal\n");
 printf("%d\t",1);
 printf("%d\t",USN[0]);
 printf("%s\t",name[0]);
 printf("        %d\t",ps1);
 printf("    %d",cs1);
 printf("    %d",ms1);
 printf("      %d",ts1);
 printf("\n");
 printf("%d\t",2);
 printf("%d\t",USN[1]);
 printf("%s\t",name[1]);
 printf("        %d\t",ps2);
 printf("    %d",cs2);
 printf("    %d",ms2);
 printf("      %d",ts2);
 printf("\n");
 printf("%d\t",3);
 printf("%d\t",USN[2]);
 printf("%s\t",name[2]);
 printf("        %d\t",ps3);
 printf("    %d",cs3);
 printf("    %d",ms3);
 printf("      %d",ts3);
 printf("\n");
printf("student %d has scored  highest marks of %d",tmp1,highest);
}
