Subjects=[]
Elective=["ab","bc","cd","de","ef"]

for i in range (0,10):
    j = input()
    Subjects.append(j)

Subjects.extend(Elective)

print(Subjects)

for i in range(0,3):
    p=input()
    Subjects.append(p)

print(Subjects)

dup=input("Enter duplicate element:")
for i in Subjects:
    if(i==dup):
        print("Index=",Subjects.index(i))
        break

for i in Subjects:
    if(i==dup):
        Subjects.remove(i)

print(Subjects)

def remove_range(i1,i2):
    del Subjects[i1:i2]
    return Subjects

remove_range(2,5)

Subjects.reverse()
Subjects.sort()
Subjects.pop(5)

print(Subjects)

tup=(0,1,2,3,4,5)
print(tup)
print(type(tup))
tup=list(tup)
print(type(tup))
tup.pop()
tup.append(100)
tup=tuple(tup)
print(type(tup))
print(tup)
