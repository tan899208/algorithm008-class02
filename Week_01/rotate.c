void rotate(int* nums, int numsSize, int k){
	int cnt = 0;
	int temp,pre = nums[0];
	int cur = 0,j = 0;   

	while(cnt < numsSize) {	
		j = (j + k <= numsSize-1 ? (j + k):((j + k) % numsSize)); 
		temp = nums[j];        
		nums[j] = pre;                         
		cnt++;            
		pre = temp; 	

		if(j == cur && cnt != numsSize){
			cur++;
			j = cur;
			pre = nums[j];
		}
	}
}