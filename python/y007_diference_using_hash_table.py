# CRACKING THE CODING INTERVIEW
# Example bottlenecks page 67

noneArr = [1, 4, 7, 8, 11]
sortArr = [1,2,4,6,9,14]
unsortArr = [1,7,5,9,2,12,3]

def findDifference(arr, difference):
	numbers = set(arr)

	for value in numbers:
		neededNumber = value + difference
		if(neededNumber in numbers):
			print('({}, {})'.format(value, neededNumber))

	print('THE END')

# time complexity O(n)
# memory O(n)

findDifference(unsortArr, 2)
