//Identity and diagonal matrice

#include <stdio.h>
#include <stdlib.h>
int **allocate(int r,int c)
{
    int **p;
    p=(int**)calloc(r,sizeof(int*));
    for(int i=0;i<r;i++)
    p[i]=(int*)calloc(c,sizeof(int));
    return p;
}
void read(int **p,int r,int c)
{
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
}
int identity(int **p,int r,int c)
{
    int f;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j&&p[i][j]!=1)
            {
            f=-1;
            break;
            }
            if(i!=j&&p[i][j]!=0)
            {
                f=-1;
                break;
            }
        }
    }
    if(f==-1)
    return -1;
    else
    return 0;
}
int diagonal(int **p,int r,int c)
{
    int f=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j&&p[i][j]!=0)
            f=-1;
        }
    }
    if(f==-1)
    return -1;
    else
    return 0;
}
int main()
{
    int r,c,**p,ch;
    printf("\nEnter no of rows and columns");
    scanf("%d %d",&r,&c);
    p=allocate(r,c);
    printf("\nEnter elements");
    read(p,r,c);
    printf("\nChoice 1:Identity \nChoice 2:Diagonal\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
    int ri=identity(p,r,c);
    if(ri)
        printf("\nNot identity");
    else
        printf("\nIdentity");
        break;
        case 2:
    int rd=diagonal(p,r,c);
    if(rd)
        printf("\nNot diagonal");
    else
        printf("\nDiagonal");
        break;
        default:
        printf("\nIncorrect choice");
    }
}
