/*************************************************************************
    >COPYRIGHT NOTICE
    >Copyright (c) 2022, SAMSUNG All rights reserved.
    
	> File Name: 1920.c
	> Author: lidong1.wang
	> Mail: lidong1.wang@samsung.com
	> Created Time: 11/21/2022 1:36:01 PM
 ************************************************************************/

#include<stdio.h>

/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
 int* buildArray(int* nums, int numsSize, int* returnSize){
    int i = 0;
     int * RET = malloc(sizeof(int)*numsSize);
     *returnSize = numsSize;
     for(i=0;i<numsSize;i++)
     {
         RET[i]=nums[nums[i]];
     }
     return RET;
 }

 int main()
 {
     int nums[]={0,2,1,5,3,4};
     int i=0;
    int * retArry = buildArray(nums,6,&i);
     for(i=0;i<6;i++)
     {
         printf("%d ",retArry[i]);
     }
     printf("\n");
 }
