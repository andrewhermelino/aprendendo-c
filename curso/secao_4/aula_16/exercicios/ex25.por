programa {

  inclua biblioteca Matematica --> m

  /*
  Calcule as raízes da equação de 2º grau. Lembrando que:

  x = (-b ± √Δ) / 2a

  onde:

  Δ = b² - 4ac

  E ax² + bx + c = representa uma equação de 2º grau.

  A variável `a` tem que ser diferente de zero.
  Caso seja igual, imprima a mensagem "Não é equação de segundo grau".

  - Se Δ < 0, não existe real. Imprima a mensagem "Não existe raiz"
  - Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única".
  - Se Δ ≥ 0, imrpima as duas raízes reais.
  */

  funcao inicio() {
    real a, b, c

    escreva("# Calcular equação de segundo grau\n")

    faca {
      escreva("A: ")
      leia(a)
      se (a == 0) {
        escreva("Erro: variável A precisa ser diferente de 0 para ser uma função de segundo grau\n")
      }
    } enquanto (a == 0)

    escreva("B: ")
    leia(b)

    escreva("C: ")
    leia(c)

    real delta = calcularDelta(a, b, c)
    escreva("Delta: " + delta + "\n\n")

    se (delta < 0) {
      escreva("Não existe raiz")
      retorne
    }

    se (delta == 0) {
      escreva("Raiz única: " + m.arredondar(calcularRaizComSoma(a, b, delta), 2))
      retorne
    }

    escreva("Duas raízes:\n")

    escreva("Raiz com soma: " + m.arredondar(calcularRaizComSoma(a, b, delta), 2) + "\n")

    escreva("Raiz com subtração: " + m.arredondar(calcularRaizComSubtracao(a, b, delta), 2) + "\n")
  }

  funcao real calcularDelta(real a, real b, real c) {
    retorne m.potencia(b, 2) - 4 * a * c
  }

  funcao real calcularRaizComSoma(real a, real b, real delta) {
    retorne (-b + m.raiz(delta, 2)) / (2 * a)
  }

  funcao real calcularRaizComSubtracao(real a, real b, real delta) {
    retorne (-b - m.raiz(delta, 2)) / (2 * a)
  }
}
