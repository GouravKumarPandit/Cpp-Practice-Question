 
Dynamic Memory Alloaction
there are three trype of Dynamic memory allocation
malloc
calloc
realloc
free()

malloc(numbers of element * sizeof(int,char,float,double));
calloc(numbers of element , sizeof(int,char,float,double));
free (ptr);

DMA are return void type of pointer so it is our responsibility to typecast it 
int *ptr=(int*) malloc(a*sizeof(int)); it contain garbage
int *ptr=(int*) calloc(a,sizeof(int)); it contain zero

Dynamic memory alloction take place in HEAP memory segment and it store randomaly in Heap segment