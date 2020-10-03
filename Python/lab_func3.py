def ArmN(x) :
  sum = 0
        t = x

            while (t > 0)
    :
    d = t % 10
        sum += d * *3
               t = t //10
                   if x == sum :
                   print(t, "it is an armstrong number")
                   else
                     :
                     print(t, "it is not an armstrong number")
                     x = int (input(""))
                         print(ArmN(x))




