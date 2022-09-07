/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    
    l = nums1.length + nums2.length
    
    merged = []

   for(let i=0; i<l; i++){
      if(i<nums1.length){
          merged.push(nums1[i])
      } else merged.push(nums2[i-nums1.length])
   }
    merged.sort((a,b)=>a-b)

    console.log(merged[l/2]+merged[(l/2)-1] )
if(l % 2 == 0 ){
     return (merged[l/2]+merged[(l/2)-1]) / 2
}else{
    return merged[Math.floor(l/2)]
}
};