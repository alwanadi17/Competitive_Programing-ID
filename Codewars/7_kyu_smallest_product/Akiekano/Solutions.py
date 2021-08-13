def smallest_product(a):
    array = []
    for x in a:
        dec = 1
        for y in x:
            dec = dec*y
        array.append(dec)
    return min(array)