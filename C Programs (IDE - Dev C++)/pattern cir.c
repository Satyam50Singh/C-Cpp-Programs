#include<stdio.h>
void main()
{
	int i,a=1,y=22,b,l=60,j,v=48,m=63,k=28,x=8;
	for(i=0;i<8;i++)
	{
		if(i==7)
		{
			for(j=0;j<8;j++)
			{
				printf("%d\t",y);
				y--;
			}
		}
		else if(i==1)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x);
				else
				{
					printf("%d	",k);
					k++;
				}
			}
		}
		else if(i==2)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x+1);
				else if(b==6)
					printf("%d	",k);
				else if (b==0)
					printf("%d	",k-8);
				else
				{
					printf("%d	",v);
					v++;
				}
			}
		} 
		else if(i==4)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x+3);
				else if(b==6)
					printf("%d	",k+2);
				else if (b==0)
					printf("%d	",k-10);
				else if (b==1)
					printf("%d	",v-7);
				else if(b==5)
					printf("%d	",v+1);
				else if(b==2)
					printf("%d	",l-4);
				else if(b==3)
					printf("%d	",l+1);
				else
				{
					printf("%d	",l);
					l++;
				}
			}
		} 
		else if(i==5)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x+4);
				else if(b==6)
					printf("%d	",k+3);
				else if (b==0)
					printf("%d	",k-11);
				else if (b==1)
					printf("%d	",v-8);
				else if(b==5)
					printf("%d	",v+2);
				else if(b>=2 || b<=4)
				{
					printf("%d	",l-6);
					l--;
				}
				else
				{
					printf("%d	",l);
					l++;
				}
			}
		} 
		else if(i==6)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x+5);
				else if (b==0)
					printf("%d	",k-12);
				
				else if(b>=1 || b<=6)
				{
					printf("%d	",l-17);
					l--;
				}
				else
				{
					printf("%d	",l);
					l++;
				}
			}
		} 
		else if(i==3)
		{
			for(b=0;b<8;b++)
			{
				if(b==7)
					printf("%d	",x+2);
				else if(b==6)
					printf("%d	",k+1);
				else if (b==0)
					printf("%d	",k-9);
				else if (b==1)
					printf("%d	",v-6);
				else if(b==5)
					printf("%d	",v);
				else
				{
					printf("%d	",l);
					l++;
				}
			}	
		} 
		else
		{
			for(j=0;j<8;j++)
			{
				if(j==7)
				{
					printf("%d	",x);
					x++;
				}
				else 
				{
					printf("%d	",a);
					a++;
				}
			}	
		}
		printf("\n\n");
	}
}
