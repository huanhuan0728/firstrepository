river_countires = {
    'nile': 'egypt',
    'changjiang river': 'china',
    'mississippi river': 'us'
}

for river, country in river_countires.items():
    print(f"The {river.title()} through the {country.title()}")

print("The rivers are:")
for river in river_countires.keys():
    print(f'{river.title()}')
print("The countries are:")
for country in river_countires.values():
    print(f'{country.title()}')
