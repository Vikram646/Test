str="VikramMali"
print(str[0:2])

print(str[0:9])

print(str[-4:-1])


print("\nprinting sub string")
n = 3
chunks = [str[i:i+n] for i in range(0, len(str), n)]
print(chunks)

#split using specific character
rem=input("\nEnter the character:")
for i in range(0,len(str)):
    if(rem==str[i]):
        print(str[0:i]," ",str[i:])

#iterate using letters
for i in range(0,len(str)):
    print(str[i])

str=' AbC '
print("Left trim:",{str.lstrip()})
print("Right trim:",{str.rstrip()})
print("Trim:",{str.strip()})

print(str.lower())
print(str.upper())

str='Alpha to aplha to Alpha'

print("Replace string:",str.replace('Alpha','ABC'))
print("Replace character:",str.replace('A','ABC'))

str="Welcome to world of codeing!!!"
print(str.title())

tup=('ABC','DEF','GHI')
print('#'.join(tup))
