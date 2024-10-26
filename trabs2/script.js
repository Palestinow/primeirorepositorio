document.getElementById('btnGerar').addEventListener('click', function() {
    const numParagrafos = document.getElementById('numParagrafos').value;
    const paragrafosGerados = document.getElementById('paragrafosGerados');
    paragrafosGerados.innerHTML = ''; // Limpa os parágrafos anteriores

    for (let i = 0; i < numParagrafos; i++) {
        const paragrafo = document.createElement('div');
        paragrafo.className = 'paragrafo';
        paragrafo.textContent = `Parágrafo ${i + 1}`;
        paragrafo.addEventListener('click', function() {
            paragrafo.classList.toggle('selecionado');
        });
        paragrafosGerados.appendChild(paragrafo);
    }
});

document.getElementById('btnEnviar').addEventListener('click', function() {
    const paragrafosGerados = document.querySelectorAll('#paragrafosGerados .selecionado');
    const paragrafosSelecionados = document.getElementById('paragrafosSelecionados');

    paragrafosGerados.forEach(paragrafo => {
        const novoParagrafo = document.createElement('div');
        novoParagrafo.textContent = paragrafo.textContent;
        paragrafosSelecionados.appendChild(novoParagrafo);
        paragrafo.remove(); // Remove o parágrafo selecionado da lista original
    });
});

// Função para limpar tudo
document.getElementById('btnLimpar').addEventListener('click', function() {
    document.getElementById('paragrafosGerados').innerHTML = '';
    document.getElementById('paragrafosSelecionados').innerHTML = '';
    document.getElementById('numParagrafos').value = ''; // Limpa o campo de entrada
});
