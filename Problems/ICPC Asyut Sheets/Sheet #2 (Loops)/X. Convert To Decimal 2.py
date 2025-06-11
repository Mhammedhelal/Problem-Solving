def count_ones(n):
    count = 0
    while n > 0:
        if n % 2 == 1:
            count += 1
        n //= 2
    return count

def generate_number_of_ones(k):
    result = 0
    power = 0
    while k > 0:
        result += 2 ** power
        power += 1
        k -= 1
    return result

T = int(input())
for _ in range(T):
    N = int(input())
    ones_count = count_ones(N)
    result = generate_number_of_ones(ones_count)
    print(result)
