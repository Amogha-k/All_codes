def my_function(f_name,l_name):
  """here the function takes two name inputs and return the output which is title sensitive"""
  s=f_name.title()+l_name.title()
  return s
result=my_function("amogh","angela")
print(result)