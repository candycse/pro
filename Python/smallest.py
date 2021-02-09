smallest = None
for value in [113, 45, 116, 23, 21, 2, 44, 54]:
    if smallest is None:
        smallest = value
    elif value < smallest:
        smallest = value
    print(smallest, value)
print("After ", smallest)
