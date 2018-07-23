void swap ( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int *dataQuickSort, int l, int h)
{
    int j;
    int x = dataQuickSort[h];
    int i = (l - 1);
 
    for (j = l; j <= h- 1; j++)
    {
        if (dataQuickSort[j] <= x)
        {
            i++;
            swap (&dataQuickSort[i], &dataQuickSort[j]);
        }
    }
    swap (&dataQuickSort[i + 1], &dataQuickSort[h]);
    return (i + 1);
}
 
 //  l : Starting index, 
  // h : Ending index
void quickSort(int *dataQuickSort, int l, int h)
{
    // Create an auxiliary stack
    int stack[ h - l + 1 ];
 
    int top = -1;
 
    // push initial values of l and h to stack
    stack[ ++top ] = l;
    stack[ ++top ] = h;
 
    // Keep popping from stack while is not empty
    while ( top >= 0 )
    {
		
        // Pop h and l
        h = stack[ top-- ];
        l = stack[ top-- ];
 
        // Set pivot element at its correct position
        // in sorted array
        int p = partition( dataQuickSort, l, h );
 
        // If there are elements on left side of pivot,
        // then push left side to stack
        if ( p-1 > l )
        {
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }
 
        // If there are elements on right side of pivot,
        // then push right side to stack
        if ( p+1 < h )
        {
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
	
}
 

void displayQuickSort(int *dataQuickSort,int n )
{
    int i;
    for ( i = 0; i < n;i++ )
      {  
        printf( "[%d]",dataQuickSort[i] );
      } 
}


void ReadArrayQuickSort(int *dataQuickSort,int n)
  {
    int i;
    for(i=0;i<n;i++)
     {
		
        dataQuickSort[i] = rand()*rand() % 100000+1;
        printf("[%d]",dataQuickSort[i]);
      // scanf("%d",&data[i]);    
     }    
  
  }
