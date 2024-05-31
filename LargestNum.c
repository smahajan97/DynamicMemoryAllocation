#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
  int i = 0, LargeNum = 0;;

  for(i = 0 ; i < iSize ; i++)
  {
    if(Arr[i] > LargeNum)
    {
      LargeNum = Arr[i];
    }
  }
  return LargeNum;
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
  
  iRet = Maximum(Brr, iCount);
  if(iRet != 0)
  printf("Largest elements is : %d\n",iRet);

  free(Brr);
  
  return 0;
}
