def fibonacci(n: int) -> int:
    # Caso base
    if n == 0 or n == 1:
        return n
    else:
        # Passo recursivo
        return fibonacci(n - 1) + fibonacci(n - 2)


# Exemplo de uso
n = int(input("Digite um número inteiro: "))
resultado = fibonacci(n)
print(f"O {n}-ésimo número da sequência de Fibonacci é: {resultado}")
