

'''  Author: PHNO - Tecnólogo | Pós-Graduado
     Data Release: 25/10/2024
     Versão Código: 1.0.1v
     Replit: @PHNO, @PHREPLIT
     E-mail: phreplit@gmail.com  '''

''' Algoritmo: Metragem e Calculo para Telhado Residencial, com menu e compilacao em console. '''

import os # importa lib p/ os clear
import sys
import json

op = 0 
while op != -1:
  print('')
  print(' Metragem e Calculo para Telhado ')
  print('')
  print('')
  print('1 - Calcular Metro Quadrado do Telhado [4 lados iguais]')
  print('2 - Calcular Qtd. de telhas americanas por M. Quad.')
  print('3 - Calcular Qtd. de telhas coloniais por M. Quad.')
  print('4 - Calcular Qtd. de telhas italianas por M. Quad.')
  print('5 - Calcular Qtd. de telhas portuguesas por M. Quad.')
  print('6 - Calcular Qtd. de telhas romanas por M. Quad.')
  print('7 - Sair')
  print('[8] Info')
  print('[9] Sobre')
  print('')
  op = int(input('Digite sua opcao: '))
  if op == 1:
   print('')
   v1 = int(input('Digite o comprimento do telhado: '))
   print('')
   v2 = int(input('Digite a largura do telhado: '))
   resultado = v1 * v2
   print('')
   print('Os metros quadrados equivalem a: {} metros quadrados.'.format(resultado))
   print('')
   print('Tecle enter para voltar ao menu...')
   a1 = str(input(''))
   os.system('clear')
  elif op == 2:
   v4 = int(12)
   print('')
   v3 = int(input('Digite quantos metros quadrados tem o telhado: '))
   print('')
   resultado2 = v3 * v4
   print('')
   print('A quantidade de telhas americanas será de {} telha(s).'.format(resultado2))
   print('')
   print('Tecle enter para voltar ao menu...')
   a2 = str(input(''))
   os.system('clear') # limpar tela - lib os
  elif op == 3:
   v6 = int(16)
   print('')
   v5 = int(input('Digite quantos metros quadrados tem o telhado: '))
   print('')
   resultado3 = v5 * v6
   print('')
   print('A quantidade de telhas coloniais será de {} telha(s).'.format(resultado3))
   print('')
   print('Tecle enter para voltar ao menu...')
   a2 = str(input(''))
   os.system('clear') # limpar tela - lib os
  elif op == 4:
   v8 = int(14)
   print('')
   v7 = int(input('Digite quantos metros quadrados tem o telhado: '))
   print('')
   resultado4 = v7 * v8
   print('')
   print('A quantidade de telhas italianas será de {} telha(s).'.format(resultado4))
   print('')
   print('Tecle enter para voltar ao menu...')
   a2 = str(input(''))
   os.system('clear') # limpar tela - lib os
  elif op == 5:
   v10 = int(17)
   print('')
   v9 = int(input('Digite quantos metros quadrados tem o telhado: '))
   print('')
   resultado5 = v9 * v10
   print('')
   print('A quantidade de telhas portuguesas será de {} telha(s).'.format(resultado5))
   print('')
   print('Tecle enter para voltar ao menu...')
   a2 = str(input(''))
   os.system('clear') # limpar tela - lib os
  elif op == 6:
   v12 = int(16)
   print('')
   v11 = int(input('Digite quantos metros quadrados tem o telhado: '))
   print('')
   resultado6 = v11 * v12
   print('')
   print('A quantidade de telhas romanas será de {} telha(s).'.format(resultado6))
   print('')
   print('Tecle enter para voltar ao menu...')
   a2 = str(input(''))
   os.system('clear') # limpar tela - lib os
  elif op == 7:
   print('')
   print('Algoritmo Finalizado.')
   print('')
   break
  elif op == 8:
   os.system('clear')
   print('')
   print('Info')
   print('')
   print('Para calcular o metro quadrado do telhado utilizamos Comprimento x Largura. [4 lados iguais]')
   print('Para calcular a Quantidade de Telhas por Metro Quadrado: Tendo como base uma telha americana com dimensoes (43cx26l) em centimetros em vista de eixo horizontal,') 
   print(' e sabendo que calcular um metro quadrado de um telhado sera C x L entao 1 MQ = 12 telhas, assim um metro quadrado tem 12 telhas entao essa sera a medida padrao. 12 x tantos metros quadrados = a quantidade de telhas por metro quadrado.')
   print('')
   print('Para calcular a Telha Colonial: 1 MQ = 16 telhas.')
   print('Para calcular a Telha Italiana: 1 MQ = 14 telhas.') 
   print('Para calcular a Telha Portuguesa: 1 MQ = 17 telhas.')
   print('')
   print('Para calcular a Telha Romana: Tendo como base uma telha romana com dimensoes (40cx21l) em centimetros em vista de eixo horizontal, e sabendo que calcular um metro quadrado de um telhado sera C x L entao 1 MQ = 16 telhas,')
   print(' assim um metro quadrado tem 16 telhas entao essa sera a medida padrao. 16 x tantos metros quadrados = a quantidade de telhas por metro quadrado.')
   print('')
   print('Informacoes importantes: ')
   print('')
   print('Este algoritmo foi desenvolvido com variaveis inteiras entao nao permite insercao de numeros com virgula. (ex: 2,90 metros mude para 3 metros.)')
   print('')
   print('Este algoritmo foi desenvolvido em Python 3 e por padrao exige sempre que a sua sintaxe e indentacao esteja sempre correta para sua correta compilacao em console.')
   print('')
   print('Tecle enter para voltar ao menu...')
   a5 = str(input(''))
   os.system('clear')
  elif op == 9:
   os.system('clear')
   print('')
   print('Algoritmo: Metragem e Calculo para Telhado Residencial')
   print('')
   print('Author: PHNO')
   print('Data Release: 25/10/2024')
   print('Versao Codigo: 1.0.1v')
   print('Replit: @PHNO, @PHREPLIT')
   print('E-mail: phreplit@gmail.com')
   print('')
   print('Tecle enter para voltar ao menu...')
   a5 = str(input(''))
   os.system('clear')
  else: 
   print('')
   print('Erro. opcao nao encontrada!')
   print('')
   print('Tecle enter para voltar ao menu...')
   a6 = str(input(''))
   os.system('clear')