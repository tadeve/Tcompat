def insertion_sort(array):
	# starting from the second element
	for i in range(1,len(array)):
		# keep the value that will be  inserted because it will lost
		# when shifty element to the right
		key = array[i] 
		# and start comparing from from the element before it
		j = i - 1 
		# loop to the correct position of key
		while j >= 0 and array[j] > key:
			# shift all elements to the right
			array[j+1]=array[j]
			j -= 1
		# insert key at the correct position in front of the 
		# first element that is not larger than key 
		array[j+1] = key
def insertion_sort_test():
	sorted_data = [int(x) for x in open("./data/sorted_data","r").read().split("\n") if x != '']
	unsorted_data = [int(x) for x in open("./data/unsorted_data","r").read().split("\n") if x != '']
	insertion_sort(unsorted_data)
	assert sorted_data == unsorted_data