num = str(input("Digite um numero: "))
soma = 0
mult = 1
for i in num:
    c = int(i)
    soma += c * mult
    mult+= 1 
mod = soma % 11    
print(mod)    
    
    
    
    
    
    