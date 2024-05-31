
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
  int i = 0, LargeNum = Arr[0], SmallNum = Arr[0], Diff = 0;

  for(i = 0 ; i < iSize ; i++)
  {
    if(Arr[i] > LargeNum)
    {
      LargeNum = Arr[i];
    }
     if(Arr[i] < SmallNum)
    {
      SmallNum = Arr[i];
    }
  }

  Diff = LargeNum - SmallNum;
  return Diff;
}

int main()
{
  int iCount = 0, i = 0, iRet = 0;
  int *Brr = NULL;

  printf("Enter the count of elements : \n");
  scanf("%d", &iCount);

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

  iRet = Difference(Brr, iCount);
  printf("Difference is : %d\n",iRet);

  free(Brr);

  return 0;
}

