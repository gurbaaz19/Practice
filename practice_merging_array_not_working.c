//merge two arrays
#include <stdio.h>
int main(){
int a[]={3,2,54,34,5};
int b[]={29,84,85,32,4};
int n,m;
n=sizeof(a)/sizeof(int);        //5
m=sizeof(b)/sizeof(int);        //5

int c[]={ };
int x=m+n;                      //10
printf("n=%d m=%d x=%d \n",n,m,x);
for(int i=0,j=n+i;i<n,j<x;i++,j++)
{

c[i]=a[i];
c[j]=b[i];
}

for (int i=0;i<x;i++){
printf("%d ",c[i]);
}
}