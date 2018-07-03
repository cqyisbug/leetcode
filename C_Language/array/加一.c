#include<stddef.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    if (digitsSize == 0)
    {
        *returnSize = 0;
        return (int *)malloc(0);
    }

    int i = 0, flag = 1;
    for (i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] == 9 && flag)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            flag = 0;
            break;
        }
    }
    int *result = NULL;
    if (i == -1 && flag)
    {
        *returnSize = digitsSize + 1;
        result = (int *)malloc(sizeof(int) * (*returnSize));
        result[0] = 1;
        for (i = 0; i < digitsSize; i++)
        {
            result[i + 1] = digits[i];
        }
    }
    else
    {

        *returnSize = digitsSize;

        result = (int *)malloc(sizeof(int) * (*returnSize));
        for (i = 0; i < digitsSize; i++)
        {
            result[i] = digits[i];
        }
    }

    return result;
}