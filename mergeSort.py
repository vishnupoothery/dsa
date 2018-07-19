def merge(A,p,q,r):
    n1 = q-p+1
    n2 = r-q
    L = []
    R = []
    for i in range(n1):
        L.append(A[p+i-1])
    for i in range(n2):
        R.append(A[q+i])
    i=0
    j=0
    k=p
    print(p)
    print(q)
    print(r)
    print(n1)
    print(n2)
    print(L)
    print(R)

    while i<n1 and j<n2:
        if L[i] <= R[j]:
            A[k]=L[i]
            i+=1
        else:
            A[k]=R[j]
            j+=1
        k+=1
    while i<n1:
        A[k]=L[i]
        k+=1
        i+=1
    while j<n2:
        A[k]=R[j]
        k+=1
        j+=1

def mergeSort(A,p,r):
    if p<r:
        q=int((p+r)/2)
        mergeSort(A,p,q)
        mergeSort(A,q+1,r)
        merge(A,p,q,r)


n = int(input("Enter array size : "))
arr = []
print("Enter array : ")
for i in range(n):
    a = int(input())
    arr.append(a)

print(arr)

mergeSort(arr,0,len(arr)-1)

print(arr)