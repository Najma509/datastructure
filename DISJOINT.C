#include<stdio.h>
#include<stdlib.h>
void main()
{
  int arr1[30],i,n,a,b,temp,arr2[30],ch;
  clrscr();
  printf("\n1.CREATE");
  printf("\n2.UNION");
  printf("\n3.FIND");
  printf("\n4.EXIT");
  while(1)
  {
    printf("\nEnter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1://CREATE SET
	     printf("Enter no. of elements in set:");
	     scanf("%d",&n);
	     printf("Enter elements in set:");
	     for(i=0;i<n;i++)
	     {
	       scanf("%d",&arr1[i]);
	       arr2[i]=i;
	     }
	     break;
      case 2://UNION
	     printf("\nEnter the index of elements(2 indices)which are to connected(union):\n");
	     scanf("%d%d",&a,&b);
	     temp=arr2[a];
	     for(i=0;i<n;i++)
	     {
		if(arr2[i]==temp)
			arr2[i]=arr2[b];
	     }
	     printf("\nElement status-after-union\n");
	     for(i=0;i<n;i++)
	     {
	       printf("%d\t\t%d\n",arr1[i],arr2[i]);
	     }
	       printf("\nElements have been successfully connected(union operation)\n");
	     break;
      case 3://FIND-returns true if A and B are connected,else returns false
	     printf("\nEnter the index of elements(2 indices)whose is to be checked(Find operation):\n");
	     scanf("%d %d",&a,&b);
	     if(arr2[a]==arr2[b])
		    printf("\nElements at indices %d & %d are connected\n",a,b);
	     else
		    printf("\nElements at indices %d & %d are not connected\n",a,b);
	     break;
      case 4://EXIT
	    exit(0);
	    break;
	    default:
		    printf("\nWrong choice,please select a valid choice");
		    break;
		    }
	    }
}