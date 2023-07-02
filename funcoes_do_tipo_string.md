# Funções do tipo string

> Função upper()

A função "upper()" serve para retornar a string com todas as letras em maiúsculo. Por exemplo:

```
palavra = "python"
palavra = palavra.upper()
print(palavra)
```

O resultado será: 

```
'PYTHON'
```

> Função lower()

A função "lower()" serve para retornar a string com todas as letras em minúsculo. Por exemplo:

```
palavra = "python"
palavra = palavra.upper()
print(palavra)
```

O resultado será: 

```
'python'
```

> Função capitalize()

A função "capitalize()" serve para retornar a string com a primeira letra em maiúsculo. Por exemplo:

```
palavra = "python"
palavra = palavra.capitalize()
print(palavra)
```

O resultado será: 

```
'Python'
```

> Função strip()

A função "lower()" serve para remover todos os espaços em branco no início e no fim da string. Por exemplo:

```
palavra = "   python   "
palavra = palavra.strip()
print(palavra)
```

O resultado será: 

```
'python'
```

`Observação`

É importa lembrar que esse tipo de funções, na verdade não alteram a string original. Por exemplo, veja esse código abaixo:

```
palavra = "python"
palavra.upper()
print(palavra) 
```

O resultado será:

```
'python'
```
Isso acontece pois as funções de string não alteram a string original, elas devolvem uma nova string.

Para saber mais sobre funções do tipo string acesse: [Funções do tipo string].

[Funções do tipo string]: https://docs.python.org/3/library/stdtypes.html#text-sequence-type-str