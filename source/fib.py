whichFib = int(input("1) Slow\n2) Fast\nWhich Fibonacci Function? "))

numTerms = int(input("How many terms of Fibonacci sequence to print? "))

# Term Count - 1 2 3 4 5 6 7 8  9  10 11 12 13  14  15  16  17  18   19   20   21   22    23    24    25    26    27     28     29     30     31     32      33      34      35      36      37       38       39       40
# Terms      - 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578 5702887 9227465 14930352 24157817 39088169 63245986

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