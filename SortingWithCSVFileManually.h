	void sortingThroughFile (){ (){
#define ARRAYSIZE(x)  (sizeof(x)/sizeof(*(x)))
   const char filename[] = "sort.csv";
   /*
    * Open the file.
    */
   FILE *file = fopen(filename, "r");
   if ( file )
   {
      int array[10][10];
	/* this code is for testing purpose try if the 2d array gets dynamically allocated
	int r,c;	
	printf("\n ENter the no of rows");
	scanf("%d",&r);	
	printf("\n ENter the no of Columns");
	scanf("%d",&c);	
	int *array = (int *)malloc(r * c * sizeof(int));  
	*/     
	size_t i, j, k;
      char buffer[BUFSIZ], *ptr;
      /*
       * Read each line from the file.
       */
      for ( i = 0; fgets(buffer, sizeof buffer, file); ++i )
      {
         /*
          * Parse the comma-separated values from each line into 'array'.
          */
         for ( j = 0, ptr = buffer; j < ARRAYSIZE(*array); ++j, ++ptr )
         {
            array[i][j] = (int)strtol(ptr, &ptr, 10);
         }
      }
      fclose(file);
      /*
       * Print the data in 'array'.
       */
	printf("\n This is the Data in the csv File\n");
      for ( j = 0; j < i; ++j )
      {
         printf("array[%lu]: ", (long unsigned)j);
         for ( k = 0; k < ARRAYSIZE(*array); ++k )
         {
            printf("%4d ", array[j][k]);
         }
         putchar('\n');
      }

	// Below Code Begins for Sorting the csv file  
	
		int a;
	    printf("\nAfter Sorting The Data \n");

    for (i = 0; i < 10; ++i)

    {

        for (j = 0; j < 10; ++j)

        {

            for (k =(j + 1); k < 10; ++k)

            {

                if (array[i][j] > array[i][k])

                {

                    a = array[i][j];

                    array[i][j] = array[i][k];

                    array[i][k] = a;

                }

            }

        }

    }

// now print the array
for ( j = 0; j < i; ++j )
      {
         printf("array[%lu]: ", (long unsigned)j);
         for ( k = 0; k < ARRAYSIZE(*array); ++k )
         {
            printf("%4d ", array[j][k]);
         }
         putchar('\n');
      }
	

	

   } // this is for if(file)
   else /* fopen() returned NULL */
   {
      perror(filename);
   }

}
