Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

void swap(int *x,int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i,mid,min;
    int size=nums1Size+nums2Size;
    int array[size];
    
    for(i=0;i<nums1Size;i++){
        array[i]=nums1[i];
    }
    int j=0;
    for(int k=i;k<size;k++){
        array[k]=nums2[j++];
    }
    //sorting
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        swap(&array[min],&array[i]);
    }
    
    mid = size/2;
    if(size%2==0){
        return (array[mid]+array[mid-1])/2.0;
        
    }
    else{
        return (array[mid]);
    }

}