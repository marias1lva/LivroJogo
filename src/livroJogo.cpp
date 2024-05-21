  #include <cstdlib> // Para a função rand()
  #include <ctime>
  #include <iostream> 
  #include <locale> // Para a função setlocale
  using namespace std;

  int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Para reconhecer acentos
    srand(time(0));
    int atitude = 0, arma = 0; // Variáveis capitulo 1
    // Introdução
    cout << "                     🍃 O DESTINO DO RONIN 🍃                " << endl << endl;
    cout << "Bem-vindo ao livro-jogo 'O Destino do Ronin'!" << endl;
    cout << "Você é Kaito, um samurai respeitado que, após uma série de eventos "
            "trágicos, se tornou um ronin, um samurai sem mestre."
        << endl;
    cout << "Agora, vagando pelas estradas do Japão feudal, você busca redenção "
            "e um novo propósito para sua vida."
        << endl;
    cout << "Prepare-se, sua jornada está prestes a começar!" << endl;
    cout << "===================================================================="
            "======================="
        << endl
        << endl;
    cout << "CAPÍTULO 1: O Encontro na Estrada." << endl
        << endl; // Saída de texto do capítulo 1
    cout << "Enquanto viaja por uma estrada solitária, você se depara com um "
            "grupo de viajantes sendo atacado por um kozoku."
        << endl; // Kozoku = ladrão de estrada
    cout << "Seus instintos samurai o instigam a intervir, mas isso pode atrair "
            "a atenção indesejada das autoridades locais."
        << endl
        << endl;

    while (atitude != 1 && atitude != 2) {
      cout << "O que você faz?" << endl << endl;
      cout << "1. Ignorar a situação e continuar sua jornada. " << endl;
      cout << "2. Intervir e lutar contra o kozoku." << endl;
      cin >> atitude;
      cout << endl;

      if (atitude != 1 && atitude != 2) {
        cout << "- Isso não é uma escolha! Retorne ao seu destino" << endl;
      }
    }

    if (atitude == 2) {
      cout << "Você decide intervir e ajudar os viajantes." << endl;
      cout << "Empunhando sua katana, você enfrenta o kozoku com bravura e "
              "determinação."
          << endl;
      cout << "Durante a luta, sua katana quebra. Você usa das suas habilidades "
              "em artes marciais para derrotar o ladrão de estrada."
          << endl;
      cout << "Sua intervenção salva os viajantes, mas agora você tem a atenção "
              "das autoridades locais."
          << endl;
      cout << "Como agradecimento pela sua ajuda, os viajantes oferecem a você "
              "uma recompensa: uma wakizashi. (espada curta, útil em espaços "
              "confinados e como ferramenta de defesa pessoal)"
          << endl;

      while (arma != 1 && arma != 2) {
        cout << "Você vai: " << endl << endl;
        cout << "1. Recusar a wakizashi, pois pensa que eles precisam mais que "
                "você, e continuar sua jornada"
            << endl;
        cout << "2. Aceitar a wakizashi e continuar sua jornada." << endl;
        cin >> arma;
        cout << endl;

        if (arma != 1 && arma != 2) {
          cout << "- Foco na sua missão! Escolha novamente." << endl << endl;
        }
      }

      if (arma == 2) {
        cout << "Ótima escolha! Sua wakizashi sera util no futuro." << endl
            << endl;
        cout << "***********************************************" << endl;
        cout << "*                                             *" << endl;
        cout << "* Wakizashi adicionada ao seu inventario.     *" << endl;
        cout << "*                                             *" << endl;
        cout << "***********************************************" << endl;

      } else {
        cout << "Você pensou mais nos viajantes do que em si mesmo, mas será que "
                "foi uma boa escolha?"
            << endl;
      }
    } else {
      cout << "Você decide ignorar a situação e continuar sua jornada." << endl;
      cout << "Apesar de sentir um leve peso na consciência, você opta por "
              "evitar conflitos desnecessários."
          << endl;
      cout
          << "Seu caminho continua mas voce se pergunta se tomou a decisão certa."
          << endl;
      cout << "Seguindo seu caminho, você decide entrar em um vilarejo e "
              "procurar por abrigo."
          << endl;
      cout << "Ao entrar no vilarejo, você percebe uma movimentação estranha e "
              "logo descobre que o vilarejo está sendo atacado por um bando "
              "liderado pelo kozoku que você encontrou atacando os viajantes."
          << endl;
      cout << "Antes que você possa reagir, o bando o avista e parte para o "
              "ataque."
          << endl;
      cout << "Você enfrenta os kozokus com bravura, mas é superado em número e "
              "força."
          << endl;
      cout << "Infelizmente, o destino foi cruel e você perece no campo de "
              "batalha, sem conseguir encontrar a redenção que buscava."
          << endl;
      cout << "Sua jornada termina aqui." << endl;
      cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
      cout << "FIM!" << endl;
      return 0;
    }
    // Fim do capítulo 1

    int decisaoRebeldes = 0, decisaoFinal = 0; // Variáveis capitulo 2

    // Saída de texto do capitulo 2
    cout << "===================================================================="
            "======================="
        << endl
        << endl;
    cout << "CAPITULO 2: A Corrupção pela Rebeldia" << endl << endl;
    cout << "Após sua luta com o ladrão, você fica reconhecido pela cidade, um "
            "grupo de rebeldes o convoca para um conversa."
        << endl;

    while (decisaoRebeldes != 1 && decisaoRebeldes != 2) {
      cout << "O que você decide?" << endl << endl;
      cout << "1. Marcar uma conversa no beco de Yokashiro." << endl;
      cout << "2. Recusar a conversa." << endl;
      cin >> decisaoRebeldes;
      cout << endl;

      if (decisaoRebeldes != 1 && decisaoRebeldes != 2) {
        cout << " - Aceite seus caminhos! Escolha novamente." << endl << endl;
      }
    }

    if (decisaoRebeldes == 1) {
      cout << "Você aceita a conversa com os rebeldes, eles te falam o plano de "
              "atacar um Daimyo local e conquistar as terras do mesmo."
          << endl
          << endl;
      cout << "Após ouvir o plano dos rebeldes, você precisa decidir se fará "
              "parte do grupo ou irá recusar o serviço."
          << endl
          << endl;

      while (decisaoFinal != 1 && decisaoFinal != 2) {
        cout << "1. Aceitar o serviço e se juntar ao grupo." << endl;
        cout << "2. Não aceitar o serviço e ignorar o acolhimento do grupo."
            << endl;
        cin >> decisaoFinal;
        cout << endl;

        if (decisaoFinal != 1 && decisaoFinal != 2) {
          cout << "- Isso não é uma escolha! Retorne ao seu destino" << endl
              << endl;
        }
      }

      cout << endl;

      if (decisaoFinal == 1) {
        cout << "Você aceita o serviço, mas primeiro tem que invadir as terras "
                "furtivamente e recolher informações sobre soldados e defesas."
            << endl;
        if (arma == 2) {
          cout << "Por você estar desarmado, eles lhe entregam uma katana para "
                  "seguir sua missão"
              << endl
              << endl;
        }
      } else if (decisaoFinal == 2) {
        cout << "Você não aceita o serviço, porém, agora você já sabe o plano "
                "dos rebeldes, eles atacam você!"
            << endl
            << endl;

        if (arma == 2) {
          cout << "Você usa sua wakizashi para derrotar os rebeldes e se salvar."
              << endl;
        } else if (arma == 1) {
          cout << "Você está desarmado. Os rebeldes conseguem te ferir por "
                  "estarem em maior número, você perde um dos olhos mas consegue "
                  "escapar."
              << endl;
        } else {
          cout << "Isso não é uma escolha! retorne ao seu destino.";
        }
      }
    } else if (decisaoRebeldes == 2) {
      cout << "Você recusa a conversa e diz que não se juntaria a rebeldes."
          << endl;
      cout << "Você segue sua viagem." << endl;
    }
    // Fim do capítulo 2

    int decisao1 = 0, decisao2 = 0; // Variáveis capitulo 3

    // Saída de texto do capítulo 3
    cout << "===================================================================="
            "======================="
        << endl
        << endl;
    cout << "CAPÍTULO 3: As Terras do Daimyo" << endl
        << endl; // Daimyo = poderoso senhor de terras no Japão
    cout << "O Daimyo local está sabendo sobre um ataque as suas terras e está "
            "procurando por guerreiros habilidosos para ajudá-lo a restaurar a "
            "paz."
        << endl
        << endl;

    if (decisaoFinal == 2 && arma == 1) {
      cout << "Ao chegar as terras ferido, você encontra o senhor das terras ";
    } else if (decisaoFinal == 1) {
      cout << "Ao invadir as terras para recolher informações você é pego pelo ";
    } else if (decisaoRebeldes == 2) {
      cout << "Após uma longa caminhada, você chega as terras de um ";
    } else {
      cout << "Você encontra o ";
    }

    cout << "Daimyo que lhe faz um convite para se juntar à sua causa." << endl;

    while (decisao1 != 1 && decisao1 != 2) {
      cout << "O que você decide?" << endl << endl;
      cout << "1. Aceitar o convite e juntar-se ao Daimyo para ajudar a "
              "restaurar a paz e acabar de vez com os rebeldes."
          << endl;

      if (decisaoFinal != 1) {
        cout << "2. Recusar o convite do Daimyo e seguir seu próprio caminho."
            << endl;
      } else {
        cout << "2. Recusar o convite do Daimyo e ficar calado sobre o plano dos "
                "rebeldes."
            << endl;
      }

      cin >> decisao1;
      cout << endl;

      if (decisao1 != 1 && decisao1 != 2) {
        cout << "- Escolha inválida. Por favor, escolha 1 ou 2 para continuar "
                "sua missão."
            << endl;
      }
    }

    if (decisao1 == 2) {
      int rebeldes = 0;
      cout << "Você decide recusar o convite do Daimyo e, por isso, vai preso."
          << endl;
      cout << "Os rebeldes continuam com o plano. Atacam as terras e veêm você "
              "acorrentado, eles perguntam se você quer se juntar a eles."
          << endl;

      while (rebeldes != 1 && rebeldes != 2) {
        cout << "O que você faz?" << endl;
        cout << "1. Aceita pois quer ficar livre." << endl;
        cout << "2. Recusa pois acha que seu tempo já chegou ao fim." << endl;
        cin >> rebeldes;
        if (rebeldes == 1) {
          cout << "Você aceita se juntar aos rebeldes." << endl;
          cout << "Você utiliza sua arma para se soltar completamente e ajudar "
                  "os rebeldes no ataque."
              << endl;
          cout << "O ataque foi um sucesso, vocês e os rebeldes conquistaram as "
                  "terras."
              << endl;
          cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
          cout << "FIM!" << endl;
          return 0;

        } else if (rebeldes == 2) {
          cout << "Você recusa a aliança aos rebeldes." << endl;
          cout << "Para não acumularem inimigos ao longo do caminho, os rebeldes "
                  "te executam."
              << endl;
          cout << "Sua jornada termina aqui." << endl;
          cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
          cout << "FIM!" << endl;
          return 0;

        } else {
          cout << "Preste atenção nas suas escolhas! Esse caminho não é viável."
              << endl;
        }
      }
    }

    if (decisao1 == 1) {
      cout << "Você aceita o convite do Daimyo e se junta a ele em sua causa, "
              "como recompensa você recebe uma Katana personalizada"
          << endl
          << endl;
      cout << "***********************************************" << endl;
      cout << "*                                             *" << endl;
      cout << "* Katana do exército Hashira                  *" << endl;
      cout << "* adicionada ao seu inventario.               *" << endl;
      cout << "*                                             *" << endl;
      cout << "***********************************************" << endl;
      cout << endl;
      cout << "Agora que você está ao lado do Daimyo, ele lhe pede para liderar "
              "uma missão crucial para conter a rebelião."
          << endl
          << endl;

      while (decisao2 != 1 && decisao2 != 2) {
        cout << "Qual será sua próxima ação?" << endl << endl;
        cout << "1. Aceitar a missão e treinar e liderar as tropas contra os "
                "rebeldes."
            << endl;
        cout << "2. Recusar a missão e sugerir uma estratégia alternativa."
            << endl;
        cin >> decisao2;
        cout << endl;

        if (decisao2 != 1 && decisao2 != 2) {
          cout << "- Isso não é uma escolha! Retorne ao seu destino" << endl;
        }
      }

      if (decisao2 == 1) {
        cout << "Você aceita a missão e começa a treinar as tropas com muita "
                "determinação."
            << endl;
        cout << "Após várias semanas de preparação, o exército do Daimyo está "
                "pronto para enfrentar os rebeldes."
            << endl;
        cout << "A batalha final se aproxima..." << endl << endl;
      } else {
        cout << "Você recusa a missão, mas sugere uma estratégia alternativa que "
                "acaba não sendo muito eficaz contra os rebeldes."
            << endl;
        cout << "A missão falha e os rebeldes atacam o Daimyo." << endl;
        cout << "As consequências da falha da missão são graves. O Daimyo fica "
                "desprotegido e é capturado pelos rebeldes."
            << endl;
        cout << "Sem a liderança do Daimyo, o reino entra em desordem e caos. Os "
                "rebeldes ganham força e logo conquistam o controle do "
                "território, por sua traição, você será executado."
            << endl;
        cout << "Sua jornada termina aqui." << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
        return 0;
      }
    } else {
      cout << "Você decide recusar o convite do Daimyo e, por isso, vai preso."
          << endl;
      cout << "Os rebeldes continuam com o plano, atacam as terras e veêm você "
              "acorrentado, eles soltam uma de suas mãos, mas logo os soldados "
              "chegam e a luta se inicia."
          << endl;
      if (arma == 2) {
        cout << "Você utiliza sua arma para se soltar completamente e ajudar os "
                "rebeldes no ataque."
            << endl;
        cout << "O ataque foi um sucesso, vocês e os rebeldes conquistaram as "
                "terras."
            << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
        return 0;
      }
      cout << "Você não consegue se soltar, os rebeldes perdem a guerra e por "
              "terem ter te ajudado você é morto pelo exército."
          << endl;
      cout << "Sua jornada termina aqui." << endl;
      cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
      cout << "FIM!" << endl;
      return 0;
    }
    // Fim do capítulo 3

    cout << endl;

    int escolha1 = 0, escolha2 = 0; // Variáveis do capítulo 4

    // Saída de texto do capítulo 4
    cout << "===================================================================="
            "======================="
        << endl
        << endl;
    cout << "Capítulo 4: A Batalha pelo Destino." << endl << endl;
    cout << "A batalha final se aproxima, e suas habilidades como guerreiro "
            "serão testadas até o limite."
        << endl;
    cout << "Você já fez muito pela causa do Daimyo. Por isso, ele lhe pergunta "
            "se você tem certeza da sua decisão."
        << endl
        << endl;
    cout << "Você irá continuar lutando pelo Daimyo e pela justiça ou seguirá "
            "seu próprio caminho?"
        << endl
        << endl;

    while (escolha1 != 1 && escolha1 != 2) {
      cout << "1. Você está decidido! Lutará pelo daimyo e pela justiça." << endl;
      cout << "2. Você não está mais satisfeito com sua decisão. Seguirá sozinho "
              "seu próprio caminho."
          << endl;

      // Entrada da escolha do jogador
      cin >> escolha1;
      cout << endl;

      if (escolha1 != 1 && escolha1 != 2) {
        cout << "- Concentre-se e escolha novamente!" << endl << endl;
      }
    }

    // Verifica a escolha do jogador
    if (escolha1 == 1) {
      int resultado = rand() % 10 + 1;
      cout << "Um vidente local diz que você vencerá se os dados mostrarem "
              "números pares. Seu resultado é: "
          << resultado << endl
          << endl;
      if (resultado % 2 == 0) {
        cout << "O DESTINO LHE SORRIU!" << endl << endl;
        cout << "Quanta bravura! Você escolhe lutar pelo Daimyo e pela justiça, "
                "mesmo enfrentando desafios assustadores."
            << endl;
        cout << "Com coragem e determinação, você lidera o exército do Daimyo na "
                "batalha final contra as forças do mal."
            << endl;
        cout << "Após uma luta árdua, a vitória é alcançada e a paz é restaurada "
                "na região."
            << endl;
        cout << "Seu nome será lembrado como um herói que sacrificou tudo pela "
                "justiça."
            << endl;
        cout << "Sua gloriosa jornada termina aqui. Você mostrou determinação, "
                "compaixão e bravura ao longo da sua jornada. Você é um ronin "
                "exemplar, digno de admiração."
            << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
      } else {
        cout << "FIM DO EXÉRCITO HASHIRA! O DESTINO LHE DISSE!" << endl << endl;
        cout << "Infelizmente, a batalha não foi vencida. Você lutou com "
                "bravura, mas as forças do mal prevaleceram."
            << endl;
        cout << "Seu sacrifício não será esquecido, mas a paz ainda não foi "
                "alcançada."
            << endl;
        cout << "Sua jornada continua, talvez o destino lhe reserve novos "
                "desafios e oportunidades."
            << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
      }
    } else {
      cout << "Você decide seguir seu próprio caminho, buscando redenção de "
              "outra forma."
          << endl;
      cout << "Deixando para trás as questões de honra e dever, você parte em "
              "uma jornada solitária."
          << endl;
      cout << "Durante sua jornada, você encontra um vilarejo em perigo, o que "
              "você faz?"
          << endl
          << endl;

      while (escolha2 != 1 && escolha2 != 2) {
        cout << "1. Ajuda a defender o vilarejo." << endl;
        cout << "2. Ignora o vilarejo e continua sua jornada." << endl;
        cin >> escolha2;
        cout << endl;

        if (escolha2 != 1 && escolha2 != 2) {
          cout << "- Tente novamente, aceite os caminhos oferecidos pelo destino."
              << endl
              << endl;
        }
      }

      if (escolha2 == 1) {
        cout << "Você decide ajudar a defender o vilarejo, demonstrando seu "
                "valor e compaixão."
            << endl;
        cout << "Sua coragem inspira os habitantes locais e juntos vocês "
                "conseguem repelir o ataque inimigo."
            << endl;
        cout << "Você ganha o respeito e a gratidão do vilarejo, encontrando uma "
                "nova família e um novo propósito em sua jornada."
            << endl;
        cout << "Sua jornada termina aqui. Você demonstrou bravura, coragem e "
                "empatia à sua maneira. Foi um ótimo ronin."
            << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
      } else {
        cout << "Você decide ignorar o vilarejo e continuar sua jornada, "
                "priorizando seus objetivos pessoais."
            << endl;
        cout << "Embora possa encontrar sucesso em suas próprias buscas, você "
                "carrega consigo o peso da decisão de não ajudar os outros."
            << endl;
        cout << "Sua jornada continua, mas você se pergunta se poderia ter feito "
                "mais para fazer a diferença no mundo."
            << endl;
        cout << "Obrigado por jogar 'O Destino do Ronin'." << endl;
        cout << "FIM!" << endl;
      }
    }
    cout << "===================================================================="
            "======================="
        << endl
        << endl;
    // Fim do capitulo 4
    // Fim do jogo
    return 0;
  }
