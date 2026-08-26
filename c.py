r=1
while r<=9:
    c=1
    while c<=r:
        print("{0}*{1}={2}".format(r,c,r*c),end=" ")
        c+=1
    print()
    r+=1