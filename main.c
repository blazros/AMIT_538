#include <stdio.h>
#include <stdlib.h>
#define code1 0
#define code2 0
#define code3 0
#define code4 0
#define code5 1
void inc (int *x,int *y)
{
    ++*x;
    ++*y;
}
int welcome (int x)
{
    printf("%d - Welcome\n",x);
    return x;
}
void call (int (*fptr)(int), int x)
{
    fptr(x);
}
#if code1 == 1
int main()
{
    int x = 0x12345678, y = 20;
    char *ptr = &x;
    printf("the value = %x address = %x \n", *ptr, ptr);
    ptr++;
    printf("the value = %x, address = %x",*ptr, ptr);
    return 0;
}
#elif code2 == 1
int main ()
{
    int i = 50, j = 20;
    int *ip = &i, *jp = &j;
    inc(ip,jp);
    printf("value of i = %d\nvalue of j = %d\n",i,j);
}

#elif code3 == 1
int main ()
{
        int (*ptr)(int) = welcome;
        call(&welcome, 50);

        return (0);
}

#elif code4 == 1
int main ()
{
    int grades[5] = {10,20,30,40,50};
    int i = 0;

    for (i = 0; i<5;i++)
    {
        printf("grade %d : %d\n",i+1,grades[i]);
    }
    return (0);
}

#elif code5 == 1
int main ()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {4,5,3};
    int arr3[5]= {0};
    int i =0,s1 = 0, s2 = 0, s3 = 0, max = 0, min = 0;

    s1 = sizeof(arr1)/sizeof(arr1[0]);
    s2 = sizeof(arr2)/sizeof(arr2[0]);
    if (s1 >= s2)
    {
        max = s1;
        min = s2;
        s3 = s1;
    }
    else
    {
        max = s2;
        min = s1;
        s1 = s2;
    }
    while (i < min)
    {
     arr3[i] = arr1[i] + arr2[i];
     printf("the arr[%d] element = %d\n",i, arr3[i]);
     i++;
    }
    while (i < max)
    {
        if (s1 == max)
            arr3[i] = arr1[i];
        if (s2 == max)
            arr3[i] = arr2[i];
        printf("the arr[%d] element = %d\n",i, arr3[i]);
        i++;
    }
    return (0);
}
#endif
