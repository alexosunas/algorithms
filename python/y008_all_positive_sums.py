# CRACKING THE CODING INTERVIEW
# Example: print all positive integer solution ot the ecuation a^3 + b^3 = c^3 + d^3 where a,b,c,d are int from 1 to 1000

def getPairs(max):
	pairs = []
	for i in range(1, max + 1):
		for j in range(1, max + 1):
			pairs.append((i,j))

	return pairs

def printPairs(pairs):
	for i in pairs:
		for j in pairs:
			abSum = i[0] + i[1]
			cdSum = j[0] + j[1]

			if(abSum == cdSum):
				print('({}, {})({}, {})'.format(i[0], i[1], j[0], j[1]))

printPairs(getPairs(5))

# Time complexity O(2n^2) => O(n^2)
# memory O(n^2)