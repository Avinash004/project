#include<stdio.h>
int main()
 {
  
 int n,part,space,star,branch,temp,i,j ;
 scanf("%d",&n);
  if(n<=1)
 {
     printf("You cannot generate christmas tree");
    
   }
  if(n>20)
   {
     printf("Tree is no more");
   }

 
 temp=n-2;
 if(n!=1&&n!=0&&n<=20){ 
 for(part=0;part<n-1;part++)
 { if(part!=0&&part!=1)temp--;
if(part==0)
  {
 for(branch=0;branch<n+1;branch++)
   {
       for(space=1;space<n+1-branch;space++)
       {
          printf(" ");
      }
       for(star=1;star<=((2*branch)+1);star++)
        {
          printf("*");
        }
       printf("\n");
  }
   }
if(part==1)
 {
 
 for(branch=1;branch<=n-1;branch++)
   {
       for(space=1;space<n+1-branch;space++)
       {
          printf(" ");
      }
       for(star=1;star<=((2*branch)+1);star++)
        {
          printf("*");
        }
       printf("\n");
  }
}
if(part!=1&&part!=0)
 {
 
 for(branch=1;branch<=temp+1;branch++)
   {
       for(space=1;space<n+1-branch;space++)
       {
          printf(" ");
      }
       for(star=1;star<=((2*branch)+1);star++)
        {
          printf("*");
        }
       printf("\n");
  }
}
}
 
for(i=0;i<2;i++)
 {
   for(j=0;j<(2*(n+1)-1)/2; j++)
     {
        printf(" ");
    }
   printf("*\n");
  
}
 
}

return 0;

}   


