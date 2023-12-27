#merge-sort implementation
def merge(larr,rarr):
    i=0
    j=0
    k=0
    arr=[]
    while(i<len(larr) and j<len(rarr)):
        if larr[i] >rarr[j]:
            arr.append(rarr[j])
            j+=1
            k+=1
        else:
            arr.append(larr[i])
            i+=1
            k+=1
    while(i<len(larr)):
         arr.append(larr[i])
         i+=1
         k+=1
    while(j<len(rarr)):
        arr.append(rarr[j])
        j+=1
        k+=1
    return arr

def merge_sort(arr):
    if len(arr)==1:
        return arr
    
    
    mid=(len(arr)-1)//2
    left=merge_sort(arr[0:mid+1])
    right=merge_sort(arr[mid+1:len(arr)])
    return merge(left,right)


arr=[5,4,3,2,1]
print("Before sorting")
print(arr)
arr=merge_sort(arr)
print(arr)






