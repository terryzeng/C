#include <stdio.h>
#include <stdlib.h>
//include <iostream>
//using namespace std;

int binsearch1(int x, int v[], int n)
{
    int low, high, mid;
    
    //int count = 0;//statistics the search length
    low = 0;
    high = n;
    mid = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        //printf("mid=%d \n",mid);
        if (x < v[mid])
        {
            //count++;
            high = mid - 1;
            //printf("high_low=%d \n",high);
        }
        else if (x > v[mid])
        {
            //count += 2;
            low = mid + 1;
            //printf("high_high=%d \n",high);
        }
        else
        {
            //count += 2;
            //printf("result mid=%d \n",mid);
            return mid;
        }
    }
    //printf("Not found!\n");
    return -1;
}

int binsearch2(int x, int v[], int high, int low)
{
    int mid = -1;
    if (low > high)
        return -1;
    else{
        mid = (low + high)/2;
        if (x < v[mid])
            return binsearch2(x, v, mid -1, low);
        else if (x > v[mid])
            return binsearch2(x, v, high, mid + 1);
        else 
            return mid;
    }
}

int main()
{
    int a[99];
    int i;
    for (i = 0; i < 100; i++)
    {
        a[i]=i;
    }
#if 0
    //success find the search count
    printf("Each element success to find the search count:");
    for (i = 0; i < 7; i++)
    {
        printf(" %d", binsearch(i,a,7));
    }
    printf("\n");

    //failed to find the search count
    printf("Each element failed to find the search count:");
    for (i = 0; i < 7; i++)
    {
        a[i]=1 + 2*i;
    }
    for (i = 0; i < 8; i++)
    {
        printf(" %d", binsearch(i*2, a, 7));
    }
    printf("\n");
#endif 
    //int arr[11] = {2,7,14,18,21,23,29,31,34,36,67};
    //int len = 11;
    //binsearch search test
    
    int result1 = binsearch1(101,a,100);
    int result2 = binsearch2(2,a,100,0);
    printf("search result1=%d \n", result1);
    printf("search result2=%d \n", result2);
    printf("over\n");
    
    return 0;
}
