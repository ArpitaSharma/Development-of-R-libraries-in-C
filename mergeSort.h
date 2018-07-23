void merge(int *dataMergeSort,int l,int m,int r)
{
  int i,j,k;
  int n1 = m-l+1;
  int n2 = r-m;

  int L[n1+1],R[n2+1]; // Two Temporary Arrays

  for(i=0;i<n1;i++)
   {  
      L[i] = dataMergeSort[l+i];
      //L[i] = A[l+i-1];      
   } 
  
  for(j=0;j<n2;j++)
  {
    R[j] = dataMergeSort[m+j+1];
   // R[j] = A[m+j];        
        
  } 
L[n1]=32000;
R[n2]=32000;
i = 0;  // Initial index of First Sub Array
j = 0;  // Initial index of Second Sub Array
k = l;  // Initial index of Merged Array

for(k=l;k<=r;k++)
  {
    if(L[i]<=R[j])
      dataMergeSort[k]=L[i++];

   else
    dataMergeSort[k]=R[j++];
  }
}

void MergeSort(int *dataMergeSort,int l, int r)
{
  int m;
  if(l<r)
   {     
      //m = l+(r-l)/2;
        int m = (l+r)/2;
     MergeSort(dataMergeSort,l,m);
     MergeSort(dataMergeSort,m+1,r);  
     merge(dataMergeSort,l,m,r);
   }
}

void ReadArrayMergeSort(int *dataMergeSort,int n)
 {
   int i;
   for(i=0;i<n;i++)
   {
    dataMergeSort[i] = rand()*rand() % 100000+1;
 
    printf("[%d]",dataMergeSort[i]);
    // scanf("%d",&A[i]);

   } 
     printf("\n");
  
 }

void displayMergeSort(int *dataMergeSort,int n)
  {
     int i;
     for(i=0;i<n;i++)
     {
       printf("[%d]",dataMergeSort[i]);

     }
    printf("\n");

  }
