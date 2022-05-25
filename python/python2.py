# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.


# append 在列表末尾添加元素
motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)

motorcycles.append('ducati')
print(motorcycles)

motorcycles1 = []
motorcycles1.append('honda')
motorcycles1.append('yamaha')
motorcycles1.append('suzuki')
print(motorcycles1)

# insert 在列表中插入元素
motorcycles2 = ['honda', 'yamaha', 'suzuki']

motorcycles2.insert(0, 'ducati')
print(motorcycles2)


# del语句删除元素
motorcycles3 = ['honda', 'yamaha', 'suzuki']
del (motorcycles3[0])
print(motorcycles3)

# pop删除列表末尾的元素
motorcycles4 = ['honda', 'yamaha', 'suzuki']
popped_motocycles = motorcycles4.pop()
print(popped_motocycles)

# 已知元素的值，删除元素 remove()
motorcycles5 = ['honda', 'yamaha', 'suzuki']
motorcycles5.remove('suzuki')
print(motorcycles5)

