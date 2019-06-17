#include<conio.h>
#include<stdio.h>
#include<iostream>

int mat[8][8],ret=0,k,l;
int p[8];
int position(int i,int j)
{for(;i>=0;i--)
   {int pos=0;
    for(k=i-1,l=j;k>=0;k--)//1st condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i-1,l=j+1;(k>=0&&(l<=7));k--,l++)//2nd condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i,l=j+1;l<=7;l++)//3nd condition
      {if(mat[k][l]==1)pos=1;}
    for(k=i+1,l=j+1;k<=7;k++,l++)//4nd condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i+1,l=j;k<=7;k++)//5nd condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i+1,l=j-1;k<=7;k++,l--)//6nd condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i,l=j-1;l>=0;l--)//7nd condition
      {if(mat[k][l]==1)pos=1;}
    for( k=i-1,l=j-1;k>=0;k--,l--)//8nd condition
      {if(mat[k][l]==1)pos=1;}

    if(pos==0){mat[i][j]=1;ret=1;p[j]=i;return(0);}
    else {i--;if(i>=0)position(i,j);}
    return(1);
  }
}


int main()
{
p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;
int i,j;
for(i=0;i<8;i++)
    for(j=0;j<8;j++)
       mat[i][j]=0;

mat[7][0]=1;p[0]=7;

i=7;j=1;
for(;j<=7;j++)
  {ret=0;
   position(i,j);
   if(ret==1)i=7;
   else
    {for(int r1=0,c1=j-1;r1<=7;r1++)
        if(mat[r1][c1]==1)mat[r1][c1]=0;
    j--;i=p[j];i--;j--;
    }
    printf("\n\n");
   for(int i1=0;i1<8;i1++){
     for(int j1=0;j1<8;j1++)
       printf(" %d",mat[i1][j1]);
       printf("\n");}
   }
getch();
getch();
return(0);
}

/*/OUTPUT
// 1 IS THE POSITION WHERE QUEEN IS PLACED
 0 0 0 0 0 1 0 0
 0 0 1 0 0 0 0 0
 0 0 0 0 0 0 1 0
 0 1 0 0 0 0 0 0
 0 0 0 1 0 0 0 0
 0 0 0 0 0 0 0 1
 1 0 0 0 0 0 0 0
 0 0 0 0 1 0 0 0
 */
