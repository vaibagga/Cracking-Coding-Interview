def urlify(s):
    return '%20'.join(list(s.split()))
for _ in range(int(input())):
    s = input()
    print(urlify(s))
