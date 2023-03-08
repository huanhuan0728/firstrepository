# 首先创建一个列表，其中包含要打印的设计
unprinted_designeds = ['phone case', 'robot pendant', 'dodecahedron']
completed_models = []

# 模拟打印每个设计，直到没有未打印的设计为止
# 打印设计后，将其移动到列表completed_models中
while unprinted_designeds:
    current_design = unprinted_designeds.pop()
    print(f"Priting model: {current_design}")
    completed_models.append(current_design)

# 显示打印好的所有模型
print("\nThe following models have been printed:")
for completed_model in completed_models:
    print(completed_model.title())
