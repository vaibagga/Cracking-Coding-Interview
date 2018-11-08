def anagram(str1, str2):
    return sorted(str1) == sorted(str2)

for _ in range(int(input())):
    s1, s2 = input().split()
    print(anagram(s1,s2))
