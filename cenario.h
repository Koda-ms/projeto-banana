/*
colisao: tipo de bloco de colisão
colisao = 1 = bloco normal com colisão
colisao = 2 = bloco com poder imune-19
*/
typedef struct EnvItem
{
    Rectangle retangulo;
    int colisao;
    Color cor;
} EnvItem;

//Variável do cenário Global: que está sendo carregado
EnvItem envItems[40] = {0};
int envItemsLength = sizeof(envItems) / sizeof(envItems[0]);

//Variáveis de armazenamento de cenário:
EnvItem cenario1[] = {
        {{0, 0, 2700, 1000}, 0, SKYBLUE},//background
        {{0, 550, 350, 450}, 1, GRAY},
        {{560, 550, 800, 450}, 1, PINK}, 
        {{1900, 550, 800, 450}, 1, BROWN},        
        {{850, 480, 180, 170}, 1, GREEN},
        {{1600, 650, 70, 70}, 1, YELLOW},
        {{960, 410, 70, 70}, 1, BLUE},
        {{960, 150, 70, 70}, 2, BLACK},
        {{2520, 370, 140, 200}, 1, ORANGE},
        //Blocos invisíveis ao jogador
        {{559, 549, 1, 1}, 4, GRAY},
        {{1361, 549, 1, 1}, 4, GRAY},
        {{1899, 549, 1, 1}, 4, GRAY}
};
const int tamanhoCenario1 = sizeof(cenario1) / sizeof(cenario1[0]);

EnvItem cenario2[] = {
        {{0, 0, 6200, 1000}, 0, SKYBLUE},//background
        //PARTE 1
        {{0, 550, 280, 450}, 1, BLUE},
        {{1100, 550, 570, 450}, 1, YELLOW}, 
        {{2300, 550, 680, 450}, 1, BROWN},        
        {{360, 450, 180, 20}, 1, GREEN},
        {{650, 350, 180, 20}, 1, RED},
        {{650, 70, 70, 70}, 3, BLACK}, //bloco poder poção-52
        {{1520, 480, 70, 70}, 1, PINK},
        {{1700, 360, 70, 70}, 1, PURPLE},
        {{1920, 270, 180, 20}, 1, GRAY},

        //PARTE 2
        {{2700, 480, 280, 70}, 1, GRAY},
        {{2770, 410, 210, 140}, 1, GRAY},
        {{2840, 340, 140, 210}, 1, GRAY},
        {{2910, 270, 70, 280}, 1, GRAY},

        {{3250, 410, 70, 70}, 1, YELLOW},
        {{3500, 550, 150, 450}, 1, GREEN},
        {{3750, 440, 220, 20}, 1, RED},
        {{3760, 210, 70, 70}, 3, BLACK}, //bloco poder poção-52
        {{4100, 550, 2100, 450}, 1, PURPLE},
        {{4300, 480, 70, 70}, 1, BLUE},
        {{6060, 370, 140, 200}, 1, ORANGE},

        //Blocos invisíveis ao jogador
        {{1099, 549, 1, 1}, 4, GRAY}, 
        {{2299, 549, 1, 1}, 4, BROWN},
        {{3749, 439, 1, 1}, 4, RED},
        {{3969, 449, 1, 1}, 4, RED}

};
const int tamanhoCenario2 = sizeof(cenario2) / sizeof(cenario2[0]);

EnvItem cenario3[] = {
        {{0, 0, 6200, 1000}, 0, SKYBLUE},//background
        //PARTE 1
        {{0, 550, 1050, 450}, 1, GRAY},
        {{2100, 550, 1000, 450}, 1, BROWN},         
        {{0, 470, 80, 80}, 1, BLUE},
        {{1150, 430, 180, 20}, 1, GREEN},
        {{800, 310, 180, 20}, 1, RED},
        {{890, 140, 1000, 20}, 1, PINK},
        {{635, 220, 70, 70}, 1, BLACK}, 
        {{565, 220, 70, 70}, 1, PURPLE},
        {{705, 220, 70, 70}, 1, PURPLE},
      

        //PARTE 2
        {{2400, 480, 70, 70}, 1, YELLOW},
        {{2470, 410, 70, 70}, 1, YELLOW},
        {{2540, 410, 70, 140}, 1, YELLOW},
        {{2610, 480, 70, 70}, 1, YELLOW},

        {{3250, 430, 170, 20}, 1, GRAY},
        {{3250, 210, 170, 20}, 1, BLUE},
        
        {{3220, 2, 210, 70}, 1, PURPLE},
        {{3290, 2, 70, 70}, 2, BLACK}, //bloco poder imune-19

        {{3550, 310, 70, 70}, 1, WHITE},
        {{3900, 550, 2300, 450}, 1, PINK},
        {{4000, 480, 210, 70}, 1, BLUE},
        {{4070, 410, 70, 140}, 1, BLUE},
        {{6060, 370, 140, 200}, 1, ORANGE},
        //Blocos invisíveis ao jogador
        {{1051, 549, 1, 1}, 4, GRAY},
        {{2099, 549, 1, 1}, 4, BROWN},         
        {{3101, 549, 1, 1}, 4, BROWN}         

};
const int tamanhoCenario3 = sizeof(cenario3) / sizeof(cenario3[0]);

EnvItem cenario4[] = {
       {{0, 0, 6200, 1300}, 0, SKYBLUE},//background
        //PARTE 1
        {{0, 450, 1050, 550}, 1, GREEN},
        {{1900, 450, 1650, 550}, 1, BROWN},         
        {{0, 150, 300, 300}, 1, BLUE},
        {{1300, 450, 70, 70}, 1, YELLOW},
        {{1290, 210, 70, 70}, 2, BLACK}, //bloco poder imune-19
        {{1600, 550, 70, 70}, 1, GRAY},

        //PARTE 2

        {{4670, 350, 170, 20}, 1, RED},

        {{4650, 70, 210, 70}, 1, PURPLE},
        {{4720, 70, 70, 70}, 3, BLACK}, //bloco poder poção-52

        {{3950, 610, 70, 70}, 1, BLUE},
        {{4300, 540, 1900, 460}, 1, GRAY},
        {{4400, 470, 70, 70}, 1, GREEN},
        {{6060, 370, 140, 200}, 1, ORANGE},
        //Blocos invisíveis ao jogador
        {{1051, 449, 1, 1}, 4, GREEN},
        {{1899, 449, 1, 1}, 4, BROWN},         
        {{3550, 449, 1, 1}, 4, BROWN},         

};
const int tamanhoCenario4 = sizeof(cenario4) / sizeof(cenario4[0]);

EnvItem cenario5[] = {
    {{0, 0, 3200, 2000}, 0, SKYBLUE},//background
        //PARTE 1
        {{0, 1350, 650, 650}, 1, BLUE},
        {{1360, 1350, 300, 650}, 1, PINK},        
        {{845, 1250, 300, 20}, 1, RED},
        {{845, 1010, 300, 20}, 1, YELLOW},
        {{340, 1130, 300, 20}, 1, GRAY},
        {{1360, 1130, 140, 70}, 1, PURPLE},
        {{1430, 1060, 70, 70}, 1, PURPLE},
        {{1630, 940, 70, 70}, 1, ORANGE},
        {{1870, 821, 70, 70}, 1, BROWN},

        //PARTE 2
        {{2180, 720, 720, 70}, 1, GREEN},
        {{2540, 650, 360, 70}, 1, GREEN},
        {{2720, 420, 70, 70}, 2, BLACK}, //bloco poder imune-19
        //ESCADA
        {{0, 890, 620, 70}, 1, WHITE},
        {{0, 820, 550, 70}, 1, WHITE},
        {{0, 750, 480, 70}, 1, WHITE},
        {{0, 680, 410, 70}, 1, WHITE},
        {{0, 610, 340, 70}, 1, WHITE},

        {{530, 490, 70, 70}, 1, BLUE},
        {{730, 370, 1930, 20}, 1, GRAY},
        {{2510, 190, 140, 200}, 1, ORANGE},

        //Blocos invisíveis ao jogador
        {{651, 1349, 1, 1}, 4, BLUE},
        {{2179, 719, 1, 1}, 4, GREEN},
        {{ 729, 369, 1, 1}, 4, GRAY},
        
};
const int tamanhoCenario5 = sizeof(cenario5) / sizeof(cenario5[0]);