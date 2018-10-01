#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int i,j,k,l;
for(i=6;i>=1;i--)
{
for(j=1;j<i;j++)
{
cout<<"  ";
}
for(k=6;k>=i;k--)
{
cout<<"*"<<" ";
}
for(l=i+1;l<=6;l++)
{
cout<<"+"<<" ";
}
cout<<endl;
}
getch();
return 0;
}


