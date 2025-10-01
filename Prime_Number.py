for number in range(25, 50):
    prime = True
    for i in range(2, number):
        if number % i == 0:
            prime = False
            break
    if prime:
        print(number, end=" ")
