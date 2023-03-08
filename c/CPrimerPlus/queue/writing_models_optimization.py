def prit_models(unprinted_models, completed_models):
    """
    模拟打印每个值，直到没有未打印的设计为止
    打印每个设计之和，都将其移动到列表（completes_models）中
    """
    while unprinted_models:
        current_design = unprinted_models.pop()
        print(f"printing model: {current_design}")
        completed_models.append(current_design)

def show_completed_model(completed_models):
    """显示打印好的模型"""
    print("\nThe following medels have been printed:")
    for completed_model in completed_models:
        print(completed_model)
    
