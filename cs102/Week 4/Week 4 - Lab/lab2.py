def fn ( a ):
    return 1+a*a
y = 0
for x in range (-200, 201):
    y = fn(x)
    print(x,y)
