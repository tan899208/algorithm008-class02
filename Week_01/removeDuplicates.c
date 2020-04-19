int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;

    int count = 1;
    int *q = nums;

    for(int i = 0;i < numsSize; i++){
        if(nums[count-1] != q[i]) {
            count++;
            nums[count-1] = q[i];
        }
    }
    return count;
}