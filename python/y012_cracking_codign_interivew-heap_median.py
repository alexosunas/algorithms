import heapq

randomNumbers = [56, 2, 4, 12, 9, 7, 34, 8, 72, 8]

def keepTrackOfMedian(numbers):
    minHeap = []
    maxHeap = []

    for number in numbers:
        print('Number: {}'.format(number))

        if(not minHeap and not maxHeap):
            heapq.heappush(maxHeap, number)
            median = number
        else:

            if(number < maxHeap[0]):
                heapq.heappush(minHeap, - number)
                # print('1 Min: {}'.format(minHeap))
            else:
                heapq.heappush(maxHeap, number)

            if(len(minHeap) < len(maxHeap)):
                rootElement = heapq.heappop(maxHeap)
                heapq.heappush(minHeap, - rootElement)
            elif(len(minHeap) > len(maxHeap) + 1):
                rootElement = heapq.heappop(minHeap)
                heapq.heappush(maxHeap, abs(rootElement))

            median = minHeap[0]

            print('Min: {}'.format(minHeap))
            print('Max: {}'.format(maxHeap))

        print('******** Median ********* : {}'.format(abs(median)))

keepTrackOfMedian(randomNumbers)