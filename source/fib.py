whichFib = int(input("1) Slow\n2) Fast\nWhich Fibonacci Function? "))

numTerms = int(input("How many terms of Fibonacci sequence to print? "))


#recursive approach
def fib(n):
    if n <= 1:
        return n
    else:
        tmp = (fib(n-1) + fib(n-2))
        return tmp

#recursive approach with memoization
def fast_fib(n, memo):
    if not n in memo:
        memo[n] = fast_fib(n-1, memo) + fast_fib(n-2, memo)
    return memo[n]

if whichFib <= 0:
                                                        print("Please choose either 1) Slow or 2) Fast next time.")
elif whichFib >= 3:
                                                        print("Please choose either 1) Slow or 2) Fast next time.")
elif numTerms <= 0:
                                                        print("Please enter a positve value next time.")
else:
    print("Fibonnaci sequence:")
    for i in range(numTerms):
        if whichFib == 1:
            print(f"{i+1}) {fib(i)}")
        elif whichFib == 2:
            memo = {0:0, 1:1}
            print(f"{i+1}) {fast_fib(i, memo)}")
        else:
            print()