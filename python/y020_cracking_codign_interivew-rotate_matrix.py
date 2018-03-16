# gven an image represented by an NxN matrix
# write a method to rotate the image by 90 degrees

def rotateMatrix(image):
	rotated = []
	for row in image:
		rows_amount = len(row)
		count = 0

		while(count < rows_amount):
			try:
				rotated[count]
			except IndexError:
				rotated.append([])

			rotated[count].insert(0, row[count])
			count = count + 1

	return rotated


the_image = [[1, 2, 3, 3.5],
			 [4, 5, 6, 6.5],
			 [7, 8, 9, 9.5],
			 [10, 11, 12, 13]]

print(rotateMatrix(the_image))


# Time compexity O(n x n)

# Memory complexity O(n x n)