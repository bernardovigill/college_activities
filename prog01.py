{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyOX17OGsQ6wXAgMCUloIhhw",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/bernardovigill/college_activities/blob/main/Untitled0.ipynb\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 8,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "qYM3QAFSQZ5g",
        "outputId": "af320715-26ef-4006-e290-c6869224bbae"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Digite o seu salário atual: 500\n",
            "O salário antes do reajuste era de R$ 500.0\n",
            "O percentual de aumento é de  50 %\n",
            "O valor de aumento é de R$ 250.0\n",
            "O novo sálario após o aumento é de R$ 750.0\n"
          ]
        }
      ],
      "source": [
        "salario = float(input(\"Digite o seu salário atual: \"))\n",
        "if salario <= 280.0:\n",
        "  novo_salario = salario * 1.2\n",
        "  percentual = 20\n",
        "  aumento = salario * 0.2\n",
        "elif salario > 280.0 and salario <= 700.0:\n",
        "  novo_salario = salario * 1.5\n",
        "  percentual = 50\n",
        "  aumento = salario * 0.5\n",
        "elif salario > 700.0 and salario <= 1500.0:\n",
        "  novo_salario = salario * 1.1\n",
        "  percentual = 10\n",
        "  aumento = salario * 0.1\n",
        "elif salario > 1500.0:\n",
        "  novo_salario = salario * 0.5\n",
        "  percentual = 5\n",
        "  aumento = salario * 0.05\n",
        "else:\n",
        "  print(\"Valor inválido\")\n",
        "\n",
        "print(\"O salário antes do reajuste era de R$\", salario)\n",
        "print(\"O percentual de aumento é de \", percentual,\"%\")\n",
        "print(\"O valor de aumento é de R$\", aumento)\n",
        "print(\"O novo sálario após o aumento é de R$\", novo_salario)\n",
        "\n",
        "\n",
        "\n"
      ]
    }
  ]
}
