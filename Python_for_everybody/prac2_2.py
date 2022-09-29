studict={"A":{'id':1,'name':'vikram','mmarks':75,'cmarks':72,'pmarks':73},
         "B":{'id':2,'name':'abc','mmarks':70,'cmarks':70,'pmarks':70},
         "C":{'id':3,'name':'efg','mmarks':70,'cmarks':70,'pmarks':70},
         "D":{'id':4,'name':'hij','mmarks':70,'cmarks':70,'pmarks':70},
         "E":{'id':5,'name':'lmn','mmarks':70,'cmarks':70,'pmarks':70} }

key=studict.keys()
print(key)
value=studict.values()
print(value)
studict.update({"f":{'id':6,'name':'pqr','mmarks':70,'cmarks':70,'pmarks':70}})
print(studict)

print("Specified value using get method:",studict.get("A"))


def update_detail(tempdict,k):
    flag=0
    for i in tempdict:
        if(i==k):
            flag=1
            tempdict[k]['id']=input("Enter id:")
            tempdict[k]['name']=input("Enter name:")
            tempdict[k]['mmarks']=input("Enter mmarks:")
            tempdict[k]['cmarks']=input("Enter cmarks:")
            tempdict[k]['pmarks']=input("Enter pmarks:")
            break
    
    if(flag==0):
        print("Key Not Found...")
    else:
        return tempdict

newstuddict=update_detail(studict,'A')
print(newstuddict)
keylist=[]
for i in newstuddict:
    keylist.append(i)
print("key lIst...")

print(keylist)

valuelist=[]
for i in newstuddict.values():
    valuelist.append(i)
print("Value lIst...")
print(valuelist)
