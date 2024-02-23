while True:
    n =int(input(("donner un number:")))
    x = 0
    try :
     for i in range(1,n+1):
         x = x + i
     print(x)
    except ValueError as e :
        print("impossbe le calculer",e)
