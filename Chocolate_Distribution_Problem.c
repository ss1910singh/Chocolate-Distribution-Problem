#include<stdio.h>

int main()
{
    int i,j,size,n,m,val,dif,min,max;
    printf("Enter number of pocket:-");
    scanf("%d",&size);
    int a[size];
    printf("Enter number of chocolate in pocket:-");
    for(i=0;i<size;i++)
    {
       scanf("%d",&a[i]);  
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    } 

    printf("enter number of student:-");
    scanf("%d",&m);
    n=size-(m-1);
    val=a[size];
    for(i=0;i<n;i++)
    {
        min=a[i];
        max=a[i+m-1];
        dif=max-min;
        if(dif<val)
        {
            val=dif;
        }
    }
     printf("Minimum diffrence is:-%d",val);
     return 0;

}