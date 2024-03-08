# x = [1, 2, 3]
# y = x
# x[1] = -15
# print(x)
# print(y)
x = [1, 2, 3]
y = x[:] #ou y = list(x)
x[1] = -15
print(x)
print(y)
#dans le premier code ila changer la valeur de X[1] mais dans le deuxieme exemple il n'a pas changer