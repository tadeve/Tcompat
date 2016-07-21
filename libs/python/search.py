def binary_search(array,value):
	"searches a sorted array for the position of a certain value"
	high = len(array)-1
	low = 0
	while high > low:
		mid = (low+high)//2
		if array[mid] > value:
			high = mid-1
		elif array[mid] < value:
			low = mid+1
		else:
			return mid
	return low
	
def binary_search_test():
	f =list(set([int(x) for x in open("./data/sorted_data").read().split("\n")]))
	for i in range(len(f)):
		# print(binary_search(f,f[i]),f[i],i)
		assert binary_search(f,f[i]) == i
	
		
	