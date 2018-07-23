 void ReadArraySelectionSort(int *dataSelectionSort,int n)
{
  int i,k;
  for(i=0;i<n;i++)
   {
      //data[i] = randomize();// % 100+1;
     dataSelectionSort[i] = rand()*rand() % 100000+1;
 
    printf("[%d]",dataSelectionSort[i]);
   }
  printf("\n");

}

void displaySelectionSort(int *dataSelectionSort,int n)
{
  int i;
  for(i=0;i<n;i++)
   {
     printf("[%d]",dataSelectionSort[i]);

   }
printf("\n");
 
}

void selectionsort(int *dataSelectionSort,int n)
{
	
  int k,ptr,temp,min,loc;

  for(k=0;k<n-1;k++)
  {
	 
    min = dataSelectionSort[k];
    loc = k;
    for(ptr=k+1;ptr<n;ptr++)
     {
        if(min>dataSelectionSort[ptr])
         {
            min = dataSelectionSort[ptr];
            loc = ptr;    

         }

     }
if(loc!=k)
 {
   temp = dataSelectionSort[k];
   dataSelectionSort[k] = dataSelectionSort[loc];
   dataSelectionSort[loc] = temp;
   
 }
  }

}
