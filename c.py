for r in range(1,10):
    for c in range(1,r+1):
        print("{0}*{1}={2}".format(c,r,c*r),end=" ")
    print()