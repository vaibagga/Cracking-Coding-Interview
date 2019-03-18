
## using set
def allUnique(s):
	return len(s) == len(set(s))

## using a list
def allUnique2(s):
	present = [False]*256
	for i in s:
		if present[ord(i)]:
			return False
		present[ord(i)] = True
	return True


for cases in range(int(input())):
	ip = input()
	print(allUnique(ip))
	print(allUnique2(ip))
