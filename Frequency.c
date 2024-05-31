#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize, int iNumber)
{
  int i = 0, iFreq = 0;

  for(i = 0; i < iSize ; i++)
  {
    if(Arr[i] == iNumber)
    {
       iFreq++;
    }
    
  }
  return iFreq;

}

int main()
{
  int iCount = 0, i = 0, iRet = 0, iNo = 0;
  int *Brr = NULL;
  printf("Enter the count of elements : \n");
  scanf("%d", &iCount);

  printf("Enter the nmber you want to check : \n");
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

  iRet = Frequency (Brr, iCount, iNo);
  printf("frequency of % d is : %d", iNo, iRet);

  free(Brr);
  
  return 0;
}
