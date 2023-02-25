def fuck(x):
    i=1
    r=1
    while(i<x):
        r*=i
        i+=1
    return r

def __main__():
    for j in range(5):
        print(' '*(15+fuck(j)*(-1)**j)+'*')

__main__()