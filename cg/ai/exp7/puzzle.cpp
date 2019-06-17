#include<iostream>
#include<conio.h>
using namespace std;
int cx();
int gx();

int moveup(int i,int j);
int moveright(int i,int j);
int movedown(int i,int j);
int moveleft(int i,int j);
int getvalue();
void display();
int mat[3][3]={{1,2,3},{-1,5,6},{4,7,8}};
int tempmat[3][3]={{-1,2,3},{1,5,6},{4,7,8}};
int solution[3][3]={{1,2,3},{4,5,6},{7,8,-1}};
int main()
{
cout<<"\nInitial matrix\n";
display();
do{
int a[3];
int s=0;
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {

            if(tempmat[i][j]==-1) { s=1;
            a[0]=moveup(i,j); //cout<<"moveup="<<a[0]<<endl;
            a[1]=moveleft(i,j);//cout<<"moveleft="<<a[1]<<endl;
            a[2]=moveright(i,j);//cout<<"moveright="<<a[2]<<endl;
            a[3]=movedown(i,j);//cout<<"movedown="<<a[3]<<endl;

            int small=a[0];
            int index=0;
            for(int l=1;l<=3;l++)
            {
                if(a[l]<small) {small=a[l];index=l;}

            }

            //cout<<small<<endl<<index;
            cout<<endl;

            switch(index)
            {
            case 0:{ tempmat[i][j]=tempmat[i-1][j];tempmat[i-1][j]=-1; cout<<"moveup\n";break;}
            case 1:{ tempmat[i][j]=tempmat[i+1][j];tempmat[i+1][j]=-1;cout<<"moveleft\n"; break;}
            case 2:{  tempmat[i][j]=tempmat[i][j+1];tempmat[i][j+1]=-1;cout<<"moveright\n"; break;}
            case 3:{ tempmat[i][j]=tempmat[i+1][j];tempmat[i+1][j]=-1; cout<<"movedown\n";break;}
            }
                  cout<<endl; display();
                 if(s==1) break;



            }

       if(s==1)  break;
        }


   if(s==1) break;}
getch();
}while(getvalue()!=0);
    return 0;
}

void display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

        cout<<tempmat[i][j]<<" ";

        }
        cout<<endl;
    }


}

int moveup(int i,int j)
{

int k;

if(i==0){return 999;}
else { tempmat[i][j]=tempmat[i-1][j];tempmat[i-1][j]=-1;


k=getvalue();

tempmat[i-1][j]=tempmat[i][j];tempmat[i][j]=-1;
return k;
  }




}


int moveright(int i,int j)
{
    int k;
if(j==2) {return 999;}
else {
     tempmat[i][j]=tempmat[i][j+1];tempmat[i][j+1]=-1;
k=getvalue();

tempmat[i][j+1]=tempmat[i][j];tempmat[i][j]=-1;
return k;

    }


}
int movedown(int i,int j)
{
    int k;
if(i==2){return 999;}
else { tempmat[i][j]=tempmat[i+1][j];tempmat[i+1][j]=-1;

k=getvalue();

tempmat[i+1][j]=tempmat[i][j];tempmat[i][j]=-1;
return k;

}



}
int moveleft(int i,int j)
{
    int k;
if(j==0) {return 999;}
else {
     tempmat[i][j]=tempmat[i][j-1];tempmat[i][j-1]=-1;
k=getvalue();

tempmat[i][j-1]=tempmat[i][j];tempmat[i][j]=-1;
return k;
    }

}

int getvalue()
{

    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

          if(tempmat[i][j]!=solution[i][j])
          {
              ++count;
          }

        }
    }


    return count;



}

