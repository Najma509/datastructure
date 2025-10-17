#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
char queue[MAX];
int front=-1,rear=-1;
void enqueue(char ch)
{
   if(rear==MAX-1)
   {
     printf("Queue Overflow\n");
     return;
   }
   if(front==-1)front=0;
   queue[++rear]=ch;
}
char dequeue_rear()
{
   if(rear==-1)
   {
     printf("Queue Underflow\n");
     return'\0';
   }
   return queue[rear--];
}
int main()
{
  char str[MAX],processed[MAX],reversed[MAX];
  int k,i,len,idx=0;

  printf("Enter a string:");
  fgets(str,MAX,stdin);

  str[strcspn(str,"\n")]='\0';
  for(i=0;str[i]!= '\0';i++)
  {
    if(!isspace((unsigned char)str[i]))
    {
      processed[idx++]=tolower((unsigned char)str[i]);
    }
  }
  processed[idx]='\0';
  len=strlen(processed);

  for(i=0;i<len;i++)
  {
    enqueue(processed[i]);
  }
  k=0;
  while(rear!=-1)
  {
    reversed[k++]=dequeue_rear();
  }
  reversed[k]='\0';
  if(strcmp(processed,reversed)==0)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not a palindrome\n");
  }
  return 0;
}
