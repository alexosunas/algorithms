`import heapq

maxh = []
minh = []
vals=[1,2,3,4,5,6,7,8,9,10]
for val in vals:

    # Initialize the data-structure and insert/push the 1st streaming value
    if not maxh and not minh:
        heapq.heappush(maxh,-val)
        print float(val)
    elif maxh:

        # print('val : {}'.format(val))
        print('maxh : {}'.format(maxh))
        print('minh : {}'.format(minh))
        # print('- max 0 : {}'.format(-maxh[0]))

        print('heapq : {}'.format(heapq))

        # Insert/push the other streaming values
        if val >= -maxh[0]:
            heapq.heappush(minh,val)
        elif val <= -maxh[0]:
            heapq.heappush(maxh,-val)

        # Calculate the median
        if len(maxh)==len(minh):
            print float(-maxh[0]+minh[0])/2
        elif len(maxh)==len(minh)+1:
            print float(-maxh[0])
        elif len(minh)==len(maxh)+1:
            print float(minh[0])

        # If min-heap and max-heap grow unbalanced we rebalance them by
        # removing/popping one element from a heap and inserting/pushing
        # it into the other heap, then we calculate the median
        elif len(minh)==len(maxh)+2:
            heapq.heappush(maxh,-heapq.heappop(minh))
            print float(-maxh[0]+minh[0])/2
        elif len(maxh)==len(minh)+2:
            heapq.heappush(minh,-heapq.heappop(maxh))
            print float(-maxh[0]+minh[0])/2