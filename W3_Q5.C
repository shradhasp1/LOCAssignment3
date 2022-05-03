#include<stdio.h>

int n;

int Max(int arr1[]){

    int i=1,mxelem;
    mxelem=arr1[0];

    while(i < n)
	{
      if(mxelem<arr1[i])
           mxelem=arr1[i];
      i++;
    }
    
    return mxelem;
}

int main(){

    int arr[100], mxelem;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
   
    printf(" Input %d elements in the array :\n",n);
    for(int i=0; i<n; i++){
	    scanf("%d",&arr[i]);
	}

    mxelem = Max(arr);

    printf("The largest element in the array is : %d\n",mxelem);

    return 0;
}