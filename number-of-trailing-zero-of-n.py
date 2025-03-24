def zeros(n):
    count = 0
    while n > 0:
        n //= 5
        count += n
    return count


# https://www.codewars.com/kata/52f787eb172a8b4ae1000a34

if __name__ == "__main__":
    print(zeros(6))
