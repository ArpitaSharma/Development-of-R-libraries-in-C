#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include "quickSort.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "SortingWithCSVFileManually.h"
#define bool int 

int main()
{
    int *dataQuickSort,*dataSelectionSort,*dataMergeSort;
    int n,i,choice,n1=10;
    char s[500];
    clock_t start,end;
   double cpu_time_used;
	int count = 0;
   int run = 1;
	while( run )
	{
		printf("\n Press 1 To Perform Quick Sort ");
		printf("\n Press 2 To Perform Selection Sort ");
		printf("\n Press 3 To Perform Merge Sort ");
		printf("\n Press 4 To Perform Sorting Through A Manual CSV File ");
		printf("\n Press 5 For Exit ");
		printf("\n Enter Your Choice : ");
		scanf("%d",&choice);
		switch( choice )
		{
			case 1:
				printf("\n Enter the size of Array \n");
    				scanf("%d",&n);
    				dataQuickSort = (int*)malloc(sizeof(int)*(n+1));
    
   				 printf("\n Enter Array Elements \n");
   				 ReadArrayQuickSort(dataQuickSort,n);  
  
  				 printf("\n Array Elements Are : \n");
   				displayQuickSort(dataQuickSort,n);
  				 start = clock();

   				printf("\n After quick Sort Elements Are : \n"); 
    				quickSort(dataQuickSort, 0, n - 1 );
        			//end = clock();
					  start = clock() - start;		
  				 displayQuickSort(dataQuickSort,n);

    				cpu_time_used = ((double)start)/CLOCKS_PER_SEC;

				printf("\n Time taken : is %f seconds",cpu_time_used);

				
				break;
			case 2:
				printf("\n Enter the size of Array \n");
  				scanf("%d",&n);

 				dataSelectionSort = (int*)malloc(sizeof(int)*(n+1));
 
 				printf("\n Enter the Array Elements \n");
 				ReadArraySelectionSort(dataSelectionSort,n);

 				printf("\n Before Selection Sort Elements Are : \n");
 				 displaySelectionSort(dataSelectionSort,n);
  				start = clock();
				 selectionsort(dataSelectionSort,n);
 				start = clock() - start;
 				printf("\n After selection sort Elements Are :\n");
 				
				displaySelectionSort(dataSelectionSort,n);
				cpu_time_used = ((double)start)/CLOCKS_PER_SEC;

				printf("\n Time taken : is %f seconds",cpu_time_used);

				break;
			case 3:
				printf("\n Enter the size of Array \n");
  				 scanf("%d",&n);

 				 dataMergeSort = (int*)malloc(sizeof(int)*(n));

 				 printf("\n Enter Array Elements \n");
   
  				 ReadArrayMergeSort(dataMergeSort, n);

 				 printf("\n Array Elements Are :  \n");
  				 displayMergeSort(dataMergeSort,n);
    				start = clock();
   				  MergeSort(dataMergeSort,0,n-1);
				start = clock() - start;
    				printf("\n After Merge Sort Elements Are \n");
  				 displayMergeSort(dataMergeSort,n);
				cpu_time_used = ((double)start)/CLOCKS_PER_SEC;

				printf("\n Time taken : is %f seconds",cpu_time_used);

				
				break;
				
			case 4:
				start = clock();
				sortingThroughFile();
				start = clock() - start; 				
				cpu_time_used = ((double)start)/CLOCKS_PER_SEC;

				printf("\n Time taken : is %f seconds",cpu_time_used);
				break;

		/*	case 5:
	 			
				printf("\n Enter the size of Array \n");
  				 scanf("%d",&n);

				printf("Enter filename Without Extension \n");

				scanf("%s",s);
				start = clock();
				Create(s,n);
				end = clock(); 				
				cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC*1000;

				printf("\n Time taken : is %f ",cpu_time_used);
				break;
			*/case 5:
				run = 0;
				printf("\n Exit From Program ");
				break;
			default:
				printf("\n INVALID CHOICE ");
				break;
		}
	}

    
    return 0;
}
