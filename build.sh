#!/bin/bash
clear
# Compilando RUST #
echo
echo "# 1 - Buildando Rust..."
echo
cd $HOME/projetos/rust/exemplo03 && \
cargo build --release && echo && echo "[OK] Rust buildado com sucesso." || echo "[ERRO] Erro ao buildar Rust"

# Compilando C #
echo
echo "# 2 - Buildando C..."
echo
cd - && \
gcc -s -o verbo.so verbo.c --shared -L../../rust/exemplo03/target/release/ -lexemplo03 && \
gcc -s -o verbo verbo.c -L../../rust/exemplo03/target/release/ -lexemplo03 && \
echo && echo "[OK] C buildado com sucesso." || echo "[ERRO] Erro buildando C."
echo 
