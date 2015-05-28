#include<stdio.h>
#include<stdlib.h>
void ret(int a[],int n,int i,int *max);
void remp(int a[50],int n);
void prin(int a[],int n);
int main()
{
    int a[50],n,max,min,som,pro,moy,cpt=0,i=0;
    int *l;
    printf("la taille de tab:");
    scanf("%d",&n);
    remp(a,n);
    prin(a,n);
    cpt++;
    max=a[0];

    printf("\n le %d",max);


}
void remp(int a[50],int n){
int i;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
}
void prin(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);

}
void ret(int a[],int n,int i,int *max){
int var=0;
if(i==n-1){
    *max=a[i];
    var=2;
}

else{
        if(var!=2)
        ret(a,n,i+1,&max);
    else
    if(a[i]>*max)
        *max=a[i];
}








}


