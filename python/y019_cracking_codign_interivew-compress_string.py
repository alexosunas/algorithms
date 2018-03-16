# implement a method to perform basic string compression using
# the counts of repeated characters, if the compressed string
# would not become smaller than the original string your method
# sould return your original string

def compressString(s):
	currentLetter = ''
	counter = 0
	result = ''

	# if length < 2 return s

	for char in s:

		if(currentLetter != ''):
			if(currentLetter == char):
				counter += 1

			else:
				concatNumber = counter if(counter > 1) else ''

				result = result + str(concatNumber) + currentLetter
				currentLetter = char
				counter = 1

		else:
			currentLetter = char
			counter += 1

	concatNumber = counter if(counter > 1) else ''
	result = result + str(concatNumber) + currentLetter

	return result if(len(s) > len(result)) else s


print(compressString('abcd'))
print(compressString('aabbccdd'))
print(compressString('aaabbbbcccdddd'))
print(compressString('abcdd'))
print(compressString('abbbcd')) #a3bcd

# Time compexity O(n)

# Memory complexity O(1)