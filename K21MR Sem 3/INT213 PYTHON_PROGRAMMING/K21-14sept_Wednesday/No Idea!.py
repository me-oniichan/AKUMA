n, m = input().split()

values = input().split()

a = set(input().split())
b = set(input().split())
print(sum([(i in a) - (i in b) for i in values]))