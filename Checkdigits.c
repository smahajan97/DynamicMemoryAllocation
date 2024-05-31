
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
  int i = 0, iDigit = 0, iNo = 0, iCnt = 0;
  printf("The numbers containing 3 digits are : \n");

  for( i = 0 ; i < iSize ; i++)
  {
    iNo = Arr[i];
    iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        if(iCnt == 3)
        {
          printf("%d\n",Arr[i]);
        }
        iNo = iNo / 10;
    }
  }
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

  Display(Brr, iCount);

  free(Brr);

  return 0;
}
