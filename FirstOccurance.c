v#include<stdio.h>
#include<stdlib.h>

int Occurrence(int Arr[], int iSize, int iNumber)
{
  int i = 0;

  for(i = 0; i < iSize ; i++)
  {
    if(Arr[i] == iNumber)
    {
      return i;
    }
  }
  return -1;
  

}

int main()
{
  int iCount = 0, i = 0,  iNo = 0, iRet = 0;
  int *Brr = NULL;
  printf("Enter the count of elements : \n");
  scanf("%d", &iCount);

  printf("Enter the number you want to check : \n");
  scanf("%d", &iNo);

  Brr = (int*)malloc(iCount*sizeof(int));
  if(Brr == NULL)
  {
    printf("Memory allocation failed");
    return -1;
  }

  printf("Enter the elements : \n");
  for(i = 0 ; i < iCount ; i++)
  {
    scanf("%d",&Brr[i]);  
  }

  iRet = Occurrence(Brr, iCount, iNo);
  if(iRet == -1)
  {
    printf("there is no such input");
  }
  else
  {
      printf("First Occurance at index : %d",iRet);
  }


  free(Brr);
  
  return 0;
}
