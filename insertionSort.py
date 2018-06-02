#to be done

arr = []
n = int(input("Enter array size : "))
for i in range(n):
    a = int(input())
    arr.append(a)

for j in range(1,n):
    key = arr[j]
    i=j-1
    while((i>=0) and (arr[i]>key)):
        arr[i+1]=arr[i]
        i=i-1
    arr[i+1]=key

print("sorted array : ")
print(arr)