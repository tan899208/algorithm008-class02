int* plusOne(int* digits, int digitsSize, int* returnSize){
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
    }
    int *res = (int *)malloc((digitsSize + 1) * sizeof(int));
    memset(res, 0, (digitsSize + 1) * sizeof(int));
    res[0] = 1;
    *returnSize = digitsSize + 1;
    return res;
}

//遍历整个数组，当某一位的值为9时，则将其置0，否则将该位的值在原来的基础上加1；
//当各位的值都为9时，申请比该数组长度大1的数组，将最高位的值置1，其他位的值置0
int* plusOne(int* digits, int digitsSize, int* returnSize){
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] != 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int *res = (int *)malloc((digitsSize + 1) * sizeof(int));
    memset(res, 0, (digitsSize + 1) * sizeof(int));
    res[0] = 1;
    *returnSize = digitsSize + 1;
    return res;
}