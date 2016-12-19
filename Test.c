#include<stdio.h>
#define NUM_ELEMS 10
void mergeSort(int, int);
void merge(int, int);
int a[NUM_ELEMS],b[NUM_ELEMS];
main()
{
	int i=0,min=0;max=NUM_ELEMS-1;
	printf("Enter the numbers:\n":);
	for(i=0 i <NUM_ELEMS; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The Initial Array is\n");
	for(i=0 i <NUM_ELEMS; i++)
	{
		printf("%d",a[i]);
	}
	mergeSort(min,max);
	printf("The Sorted Array is\n");
	for(i=0 i <NUM_ELEMS; i++)
	{
		printf("%d",a[i]);
	}
	printf("Done\n");
	printf("Done2\n");
}

/* Sorting Function*/
void mergeSort(int min, int max)
{
	if(min < max)
	{
		int mid= (min+max)/2;
		mergeSort(min,mid);
		mergeSort(mid,max);
		merge(min,max)
	}
	else
	{
		return;
	}
}

/* Merging Function*/
void merge(int min, int max)
{
	int i=0, j=0,mid=0;
	mid = (min+max)/2;
	for(i=min, j=mid, bindex=low; (i<=mid) && (j<=max); bindex++)
	{
		if(a[i]<a[j])
		{
			b[bindex]=a[i];
			i++;
		}
		else
		{
			b[bindex]=a[j];
			j++;
		}
	}
}
