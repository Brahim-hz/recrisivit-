#include<stdio.h>
#include<stdlib.h>
void maxi(int a[],int n,int i,int *max);
void remp(int a[50],int n);
void prin(int a[],int n);
int main()
{
    int a[50],n,max=0,cptt=0,cpt=0,i=0;
    printf("la taille de tab:");
    scanf("%d",&n);
    remp(a,n);
    prin(a,n);
    cpt++;
    max=a[0];
    i=0;
    maxi(a,n,i,&max);
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
void maxi(int a[],int n,int i,int *max){

if(i==n-1){
    return ;
}

else{

    if(a[i]>(*max))
        {
            (*max)=a[i];
        maxi(a,n,i+1,&(*max));
        }
    else
    {
        maxi(a,n,i+1,&(*max));
    }
}


