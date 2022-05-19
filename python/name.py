# This is a sample Python script.


name = "Ada Lovelace"
print(name.title())  # name后面的的(.)让python对变量name执行title()指定对操作

print(name.upper())
print(name.lower())

first_name = "Ada"
last_name = 'Lovelace'
full_name = f'{first_name}  {last_name}'
print(full_name)

print(f"Hello, {full_name} {last_name}")

message = f"Hello, {full_name.title()}!"
print(message)


