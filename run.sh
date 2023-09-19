#!/bin/bash

# Verifica se foi fornecido o nome do arquivo C como argumento
if [ $# -lt 1 ]; then
    echo "> Informe o caminho para um arquivo .c"
    exit 1
fi

# Obtém o nome do arquivo C a partir do primeiro argumento
diretorio_arquivo_c="$1"
arquivo_c="${diretorio_arquivo_c##*/}"
diretorio_comp="_comp"

# Cria o diretório de compilação se não existir ainda
if [ ! -d "./$diretorio_comp" ]; then
    echo "> Criando diretório ./$diretorio_comp"
    sudo mkdir ./"$diretorio_comp"
fi

# Extrai o nome do arquivo (sem extensão) para o nome do executável
executavel="${arquivo_c%.c}.exe"

# Compila o arquivo C usando o GCC (GNU Compiler Collection)
clear
echo "> Iniciando compilação"
gcc "$diretorio_arquivo_c" -o ./"$diretorio_comp"/"$executavel"
echo "> Compilação bem-sucedida!"
echo "> Executando o programa..."

# Se a compilação executou com sucesso, executar o programa
if [ $? -eq 0 ]; then
    if [ "$2" == "-c" ]; then
        echo ""
        # Executa o arquivo executável
        "./$diretorio_comp/$executavel"
    else
        clear
        # Executa o arquivo executável
        "./$diretorio_comp/$executavel"
    fi  # Adicionei esta linha para fechar o if interno
else
    echo "> Erro durante a compilação"
fi