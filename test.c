#include<stdio.h>
#include<windows.h>

int main()//只适合查找只有一个非重复元素的数组
{
    int arr[ ] = {1, 2, 3, 4, 1, 2, 3};
    int ret = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
	ret ^= arr[i];
    }
    printf("%d\n", ret);
    system("pause");
    return 0;
}