Se você deseja implementar o cálculo da raiz cúbica de forma
mais "artesanal", pode utilizar um algoritmo iterativo, como o
método de Newton.

O método de Newton é um algoritmo que, dado um número x e uma
aproximação inicial guess para a raiz de x, itera a fórmula a
seguir até atingir uma precisão desejada:

```c
guess = (2 * guess + x / guess^2) / 3
```

A cada iteração, a aproximação para a raiz cúbica de x é
atualizada com uma nova aproximação mais precisa. O algoritmo para
quando a diferença entre as aproximações sucessivas é menor do que
um determinado erro.
