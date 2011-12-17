#include <stdio.h>
#include <math.h>

void ShellSort( int *mass, int size );

int main(int argc, char **argv)
{
	int mas[20];
	int i;
	
	printf( "Исходный массив: \n" );
	for ( i=0; i < 20; i++ ) {
		mas[i] = rand() % 20 + 1;
		printf( "%d ", mas[i]);
	}
	ShellSort(mas,20);

	printf( "\n Имеем на выходе: \n" );	
	for ( i=0; i<20; i++ ) {
			printf( "%d ", mas[i] );
	}
	
	printf("\n");
	
	return 0;
}

void ShellSort ( int *mass, int size )
{
		int d = size;
		while (d > 1) {
				d /= 2;
				int i = 0, j = 0;
				//j = i + d;
		while ((j = i + d) < size ) {
				if (mass[i] > mass[j]) {
						int tmp = mass[i];
							mass[i]=mass[j];
							mass[j]=tmp;
				}
			i++;
		}
		}
		
        int t;
            int k, l;
            for (k = 1; k < size; k++) {
                t = mass[k];
 
                for (l = k; l > 0 && mass[l-1] > t; l--) {
                    mass[l] = mass[l-1];
                }
        mass[l] = t;
    }
}
