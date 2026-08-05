Pesquisa sobre Distribuições Linux

1) Características do Linux

O Linux é um sistema operacional do tipo Unix-like, de código aberto, criado originalmente por Linus Torvalds em 1991. Ele é um kernel (núcleo do sistema), que junto com outros softwares livres forma o sistema operacional conhecido como “distribuição Linux”.

Principais características:

Gerenciamento de memória: alocação dinâmica e eficiente, com suporte a swap.

Multiprocessamento: suporte a múltiplos processadores e núcleos, amplamente usado em servidores e supercomputadores.

Gerenciamento de processos: escalonamento, prioridade, suspensão e retomada de tarefas.

Gerenciamento de dispositivos: drivers para diversos tipos de hardware, como discos, placas de vídeo, impressoras.

Segurança: sistema de permissões por usuário e grupo, além de ferramentas como SELinux e AppArmor.

Portabilidade: roda em arquiteturas variadas (x86, ARM, RISC-V).

Escalabilidade: desde celulares (Android) até supercomputadores.



---

2) Parte Gráfica e Exemplos

O Linux pode rodar em modo texto (CLI), muito usado em servidores, mas também oferece ambientes gráficos (GUI).

Principais ambientes:

GNOME: interface simples e moderna, usada no Ubuntu e Fedora.

KDE Plasma: altamente personalizável, usado no openSUSE.

Xfce/LXQt: leves, ideais para computadores antigos.


Exemplo de recursos gráficos: menus suspensos, atalhos na área de trabalho, multitarefas com áreas de trabalho virtuais, central de aplicativos semelhante à “Microsoft Store” ou “App Store”.


---

3) Requisitos de Hardware

Varia de acordo com a distribuição:

Distribuições leves (Lubuntu, Debian XFCE):

RAM: 1 GB

Processador: 1 núcleo

Armazenamento: 10 GB

Indicado para PCs antigos.


Distribuições padrão (Ubuntu, Fedora):

RAM: 4 GB

Processador: dual-core

Armazenamento: 25 GB

Indicado para desktops modernos.


Distribuições pesadas (openSUSE KDE, Fedora Workstation):

RAM: 8 GB ou mais

Processador: quad-core ou superior

Armazenamento: 40 GB+

Indicado para desenvolvimento e uso profissional.




---

4) Distribuições Selecionadas

Ubuntu

Debian

openSUSE



---

5) Finalidade do Sistema

Ubuntu: focado em usuários comuns, mas também muito usado em servidores e na área multimídia.

Debian: estabilidade e confiabilidade, excelente para servidores e sistemas críticos.

openSUSE: voltado a administradores e desenvolvedores, com ferramentas robustas de gerenciamento.



---

6) História e Origem

Debian (1993): criado por Ian Murdock, com a ideia de ser um sistema comunitário, livre e altamente estável. Inspirou dezenas de outras distribuições.

Ubuntu (2004): criado pela empresa Canonical, derivado do Debian. Foi pensado para ser mais fácil e acessível a iniciantes, com ciclos de lançamento regulares.

openSUSE (1994): surgiu na Alemanha como SuSE Linux, tornou-se openSUSE em 2005. É conhecido pela ferramenta YaST e por ser base do SUSE Linux Enterprise.



---

7) Comunidade e Suporte

A comunidade é peça-chave no sucesso do Linux:

Debian: totalmente comunitário, sem empresa central. Usuários e desenvolvedores trabalham juntos.

Ubuntu: apoiado pela Canonical, que oferece suporte comercial, mas também com forte comunidade global.

openSUSE: mantido pela comunidade e apoiado pela empresa SUSE, que garante estabilidade para ambientes corporativos.


A comunidade é responsável por documentação, resolução de dúvidas e até pela criação de pacotes novos.


---

8) Casos de Uso Reais

Debian: NASA e CERN utilizam Debian em seus sistemas de pesquisa.

Ubuntu: empresas como Wikipedia, Netflix e até a Tesla usam Ubuntu em parte da sua infraestrutura.

openSUSE: aplicado em empresas alemãs e em setores de tecnologia que precisam de controle fino do sistema via YaST.



---

9) Comparação de Desempenho

Servidores: Debian é o mais eficiente, consumindo menos recursos.

Desktop: Ubuntu oferece o melhor equilíbrio entre desempenho e usabilidade.

Desenvolvimento: openSUSE é preferido por ter ferramentas robustas, embora seja mais pesado.


Em benchmarks, Debian se destaca em estabilidade de longo prazo, enquanto Ubuntu ganha em acessibilidade e openSUSE em ferramentas administrativas.


---

fun main() {

    while (true) {
        println("\n==============================")
        println("LISTA DE EXERCÍCIOS - KOTLIN")
        println("==============================")
        println("1 - Exercício 1")
        println("2 - Exercício 2")
        println("3 - Exercício 3")
        println("4 - Exercício 4")
        println("5 - Exercício 5")
        println("0 - Sair")
        print("Escolha uma opção: ")

        when (readln().toIntOrNull()) {
            1 -> exercicio1()
            2 -> exercicio2()
            3 -> exercicio3()
            4 -> exercicio4()
            5 -> exercicio5()
            0 -> {
                println("Programa encerrado.")
                return
            }
            else -> println("Opção inválida!")
        }
    }
}

//==============================================
// EXERCÍCIO 1
//==============================================

fun exercicio1() {

    print("Digite um caractere: ")
    val entrada = readln()

    if (entrada.length != 1) {
        println("Caractere inválido!")
        return
    }

    val c = entrada[0]

    when {
        c.isDigit() -> println("É um número.")
        c.lowercaseChar() in listOf('a', 'e', 'i', 'o', 'u') ->
            println("É uma vogal.")
        c.isLetter() ->
            println("É uma consoante.")
        else ->
            println("Caractere inválido.")
    }
}

//==============================================
// EXERCÍCIO 2
//==============================================

fun exercicio2() {

    val notas = mutableListOf<Int>()

    println("Digite as notas (0 a 100).")
    println("Digite -1 para finalizar.")

    while (true) {

        print("Nota: ")
        val nota = readln().toIntOrNull()

        if (nota == null) {
            println("Valor inválido.")
            continue
        }

        if (nota == -1)
            break

        if (nota !in 0..100) {
            println("Nota inválida.")
            continue
        }

        notas.add(nota)
    }

    if (notas.isEmpty()) {
        println("Nenhuma nota informada.")
        return
    }

    println("\nClassificação:")

    for (nota in notas) {

        val classificacao = when (nota) {
            in 90..100 -> "Excelente"
            in 70..89 -> "Aprovado"
            in 50..69 -> "Recuperação"
            else -> "Reprovado"
        }

        println("$nota -> $classificacao")
    }

    println("\nQuantidade: ${notas.size}")
    println("Maior nota: ${notas.max()}")
    println("Menor nota: ${notas.min()}")
    println("Média: %.2f".format(notas.average()))
}

//==============================================
// EXERCÍCIO 3
//==============================================

fun exercicio3() {

    val nomes = listOf("Ana", null, "Carlos", "Maria", null, "João")

    var validos = 0

    println()

    for (nome in nomes) {

        if (nome == null) {
            println("Nome não informado")
        } else {

            println(nome)
            validos++

            if (nome == "Maria") {
                println("\nMaria encontrada. Busca encerrada.")
                break
            }
        }
    }

    println("Quantidade de nomes válidos encontrados: $validos")
}

//==============================================
// EXERCÍCIO 4
//==============================================

fun exercicio4() {

    val loginCorreto = "admin"
    val senhaCorreta = "1234"

    var tentativas = 0

    while (tentativas < 3) {

        println("\nTentativa ${tentativas + 1} de 3")

        print("Login: ")
        val login = readln()

        print("Senha: ")
        val senha = readln()

        if (login == loginCorreto && senha == senhaCorreta) {
            println("Login realizado com sucesso!")
            return
        }

        if (login != loginCorreto) {
            println("Login inválido.")
        } else {
            println("Senha inválida.")
        }

        tentativas++
    }

    println("\nConta bloqueada após 3 tentativas.")
}

//==============================================
// EXERCÍCIO 5
//==============================================

fun exercicio5() {

    val alunos = listOf(
        "Ana",
        null,
        "Carlos",
        "Maria",
        null,
        "João"
    )

    val notas = listOf(
        95,
        82,
        48,
        67,
        100,
        73
    )

    var excelente = 0
    var aprovado = 0
    var recuperacao = 0
    var reprovado = 0

    println()

    for (i in alunos.indices) {

        val nome = alunos[i] ?: "Aluno não identificado"
        val nota = notas[i]

        val classificacao = when (nota) {

            in 90..100 -> {
                excelente++
                "Excelente"
            }

            in 70..89 -> {
                aprovado++
                "Aprovado"
            }

            in 50..69 -> {
                recuperacao++
                "Recuperação"
            }

            else -> {
                reprovado++
                "Reprovado"
            }
        }

        println("$nome - Nota: $nota - $classificacao")
    }

    println("\n========== RELATÓRIO ==========")
    println("Total de alunos: ${alunos.size}")
    println("Excelente: $excelente")
    println("Aprovado: $aprovado")
    println("Recuperação: $recuperacao")
    println("Reprovado: $reprovado")
    println("Maior nota: ${notas.max()}")
    println("Menor nota: ${notas.min()}")
    println("Média da turma: %.2f".format(notas.average()))
}