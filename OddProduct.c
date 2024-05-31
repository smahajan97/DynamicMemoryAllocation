#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
  int i = 0, OddProduct = 1;
  int oddFound = 0;

  for(i = 0 ; i < iSize ; i++)
  {
    if(Arr[i] % 2 != 0)
    {
      OddProduct = OddProduct * Arr[i];
      oddFound = 1;
    }
  }
  if(oddFound == 1)
  {
      return OddProduct;     
  }
  else 
  {
    printf("No odd elements found");
    return 0;
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
  
  iRet = Product(Brr, iCount);
  if(iRet != 0)
  {
     printf("Product of Odd elements is : %d\n",iRet);
  }

  free(Brr);
  
  return 0;
}
