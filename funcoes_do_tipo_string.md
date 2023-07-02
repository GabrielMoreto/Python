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

`Observação`

É importa lembrar que esse tipo de funções, na verdade não alteram a string original. Por exemplo, veja esse código abaixo:

```
>>> palavra = "python"
>>> palavra.upper()
>>> print(palavra) 
```
Qual o resultado?

O resultado será:

```
'python'
```
Isso acontece porque as funções de string não alteram a string original, elas devolvem uma nova string.

```
Para saber mais sobre funções do tipo string acesse: [Funções do tipo string].

[Tipos de variáveis]: https://docs.python.org/3/library/stdtypes.html#text-sequence-type-str