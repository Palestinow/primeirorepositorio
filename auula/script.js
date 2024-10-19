function calcular(op)
{
   const n1 = parseFloat(document.getElementById('n1').value); 
   const n2 = parseFloat(document.getElementById('n2').value); 
   var resultado;

        switch(op)
            {
            case '+':
                resultado = n1 + n2;
                break;
            case '-':
                resultado = n1 - n2;
                break;
            case '*':
                resultado = n1 * n2;
                break;
            case '/':
                resultado = n1 / n2;
                break;
            }
    document.getElementById('resultado').value = resultado;                   

}
function limpar() 
{
    document.getElementById('n1').value = '';
    document.getElementById('n2').value = '';
    document.getElementById('resultado').value = '';
}
