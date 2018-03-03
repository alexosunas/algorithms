arr = [13, 27, 35, 40, 49, 55, 59, 83]
brr = [17, 35, 39, 40, 55, 58, 60, 61, 70, 83, 90]

def findEquals(a, b):
	match_elements = []
	i = 0
	j = 0
	while(i < len(a)):
		while(j < len(b) and i < len(a)):

			if(a[i] == b[j]):
				match_elements.append(a[i])
				i += 1
			elif(a[i] < b[j]):
				i += 1
				j -= 1

			j += 1

		break

	return match_elements

print(findEquals(arr, brr))