{
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/bernardovigill/college_activities/blob/main/prog01.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "n = int(input('Digite um número inteiro para calcular o seu fatorial: '))\n",
        "c = n\n",
        "f = 1\n",
        "print('Calculando {}! '. format(n), end='')\n",
        "while c > 0:\n",
        "  print('{}'.format(c), end='')\n",
        "  print(' x ' if c > 1 else ' = ', end='')\n",
        "  f *= c\n",
        "  c -= 1\n",
        "print('{}'.format(f))"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "B2x9YxEMg6Mg",
        "outputId": "d9cb1075-ab0c-4b40-eab9-d2c64de20ecd"
      },
      "execution_count": 8,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Digite um número para calcular o seu fatorial: 5\n",
            "Calculando 5! 5 x 4 x 3 x 2 x 1 = 120\n"
          ]
        }
      ]
    }
  ],
  "metadata": {
    "colab": {
      "name": "Damos-lhe as boas-vindas ao Colab",
      "provenance": [],
      "include_colab_link": true
    },
    "kernelspec": {
      "display_name": "Python 3",
      "name": "python3"
    }
  },
  "nbformat": 4,
  "nbformat_minor": 0
}