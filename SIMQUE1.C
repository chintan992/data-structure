#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int f=-1,r=-1,q[max];
void insert();
void del();
void display();
void main()
{
int opt;
clrscr();
printf("1.insert\n2.delete\n3.display\n4.exit");
a:
printf("enter choice");
scanf("%d",&opt);
switch(opt)
{
case 1: insert(); break;
case 2: del(); break;
case 3: display(); break;
case 4: exit(0); break;
}
goto a;
getch();
}


void insert()
{
int x;
if(r==max-1)
{
printf("overflow");
}

else
{

if(f==-1)
{

f=0,r=0;
printf("enter eleement");
scanf("%d",&x);
q[r]=x;

}

else{
r=r+1;
printf("enter element");
scanf("%d",&x);
q[r]=x;
}

}

}


void del()
{
int n;
if(f==-1 && r==-1)
{
printf("underflow");
}

else
{
if(f==r)
{
n=q[f];
printf("delete element %d",n);
f=-1,r=-1;
}
else
{
n=q[f];
f=f+1;
printf("deleted element %d",n);
}
}

}



void display()
{
int i;

if(f==1)
{
printf("underflow");
}
else
{
for(i=f;i<r;i++)
{
printf("queue is %d",q[i]);
}
}
}
