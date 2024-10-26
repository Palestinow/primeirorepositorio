const apagardir = document.getElementById('apagardir');
const apagaresq = document.getElementById('apagaresq');
const criaresq = document.getElementById('criaresq');
const criardir = document.getElementById('criardir');
const numero = document.getElementById('numero');

function gerar(acao) {
    const esquerda = document.querySelector('.esquerda');
    const direita = document.querySelector('.direita');
    
    const numParagrafos = parseInt(numero.value) || 0;

    switch (acao) {
        case 'apagaresq':
            esquerda.innerHTML = '';
            break;
        case 'apagardir':
            direita.innerHTML = '';
            break;
        case 'criaresq':
            for (let i = 0; i < numParagrafos; i++) {
                esquerda.appendChild(criarParagrafo(i + 1));
            }
            break;
        case 'criardir':
            for (let i = 0; i < numParagrafos; i++) {
                direita.appendChild(criarParagrafo(i + 1));
            }
            break;
       
    }
}

function criarParagrafo(index) {
    const p = document.createElement('p');
    p.textContent = `Novo parágrafo ${index}`;
    return p;
}


