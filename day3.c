//Given an array swap first and last element of the array
//Given an array and provided the positions of the elements, WAP to swap the two elements in that array
//Given an array and a number x, count the number of occurences of x in the given array

//WAP to print the element after multiplying all numbers in that array

//WAP to count the number of even and odd numbers in the array

#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[100],n,i;
	printf("Enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp=arr[0];
	arr[0]=arr[n-1];
	arr[n-1]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	
}

#include <stdio.h>

int main()
{
	int arr[10],i,n,x,y;
	printf("Enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the positions to be swapped:");
	scanf("%d %d",&x,&y);
	
	int temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
	
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}

#include <stdio.h>
int main()
{
	int i,n,arr[10],key;
	int count=0;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			count++;
		}
	}
	printf("The freq:%d",count);
	
	
	
	
}



#include <stdio.h>
int main()
{
	
	int n,i,arr[10];
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int product=1;
	for(i=0;i<n;i++)
	{
		product=product*arr[i];
	}
	printf("%d",product);
	
	
	
}


#include <stdio.h>

int main()
{
	int i,n,arr[10];
	int odd=0,even=0;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even:%d Odd:%d",even,odd);
	
	
	
}

