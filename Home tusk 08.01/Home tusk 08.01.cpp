#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

void cube1() {
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(5) << 'o' << setw(5) << char(186) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}

void cube2(){
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}

void cube3(){
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(5) << 'o' << setw(5) << char(186) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}

void cube4(){
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << ' ' << setw(4) << ' ' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}

void cube5(){
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(5) << 'o' << setw(5) << char(186) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}

void cube6(){
    cout << setw(1) << char(201) << string(9, (char)205) << char(187) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(186) << setw(3) << 'o' << setw(4) << 'o' << setw(3) << char(186) << endl
        << setw(1) << char(200) << string(9, (char)205) << char(188) << endl;
}
void lose() {
    cout << "  **    **    **     **   **    **           **       ******   ******" << endl
         << "  **    **  **  **   **   **    **        **   **   **         **    " << endl
         << "  **    **  **  **   **   **    **        **   **    ****      ******" << endl
         << "     **     **  **   **   **    **        **   **        **    **" << endl
         << "     **     **  **   **   **    **        **   **         *    **" << endl
         << "     **       **       **       ******       **     ******     ******" << endl;
}
void win() {
    cout << "  **    **    **     **   **      **               **     **********     **       **" << endl
         << "  **    **  **  **   **   **       **             **          **         ****     **" << endl
         << "  **    **  **  **   **   **        **    **     **           **         **  **   **" << endl
         << "     **     **  **   **   **        **    **     **           **         **   **  **" << endl
         << "     **     **  **   **   **        **  **   **  **           **         **     ****" << endl
         << "     **       **       **             **       **         **********     **       **" << endl;
}

int main() {

    //setlocale(LC_ALL, "");
    /*Написать программу, которая выводит на экран линию заданным символом,
    вертикальную или горизонтальную, причем линия может выводиться быстро, нормально и медленно.
    Общение с пользователем организовать через меню.*/
    /* int a;
    int line;
    char c;
    std::cout << "Выберите какую линию нарисовать\n";
    std::cout << "1 - Горизонтальная\n";
    std::cout << "2 - Вертикальная\n";
    std::cin >> a;
    int b;
    switch (a)
    {
    case 1:
        std::cout << "Выберите скорость вывода линии: 1 быстро,2 нормально, 3 медленно : ";
        std::cin >> b;
        if (b == 1){
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(100);
                std::cout << c;
            }
        }
        else if(b==2){
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(500);
                std::cout << c;
            }
        }
        else if (b == 3) {
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(1000);
                std::cout << c;
            }
        }
        else {
            std::cout << "Такой скорости нету!";
        }
        break;
    case 2:
        std::cout << "Выберите скорость вывода линии: 1 быстро,2 нормально, 3 медленно : ";
        std::cin >> b;
        if (b == 1) {
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(100);
                std::cout << c << std::endl;
            }
        }
        else if (b == 2) {
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(500);
                std::cout << c <<std::endl;
            }
        }
        else if (b == 3) {
            std::cout << "Введите длину линии\n";
            std::cin >> line;
            std::cout << "Введите символ линии\n";
            std::cin >> c;
            for (int i = 0; i < line; i++) {
                Sleep(1000);
                std::cout << c << std::endl;
            }
        }
        else {
            std::cout << "Такой скорости нету!";
        }
        break;
    default:
        break;
    }*/
    //Написать игру «Кубики».Пользователь и компьютер по очереди бросают 2 кубика.
    //Победитель — тот, у кого по результатам трех бросков сумма больше.Предусмотреть красивый интерфейс игры.
    /* int temp = 0, temp1 = 0, game = 0;
    do {
        system("cls");
        cout << setw(30) << char(201) << string(11, (char)205) << char(187) << endl
            << setw(30) << char(186) << " Dice game " << char(186) << endl
            << setw(30) << char(200) << string(11, (char)205) << char(188) << endl << endl;
        
        int onecube, twocube;
        int totalpc = 0, totaluser = 0;
        srand(time(0));
        onecube = 1 + rand() % 4;
        twocube = 1 + rand() % 4;
        
        cout << "Pc cube\n";
        switch (onecube) {
        case 1:
            cube1();
            totalpc++;
            break;
        case 2:
            cube2();
            totalpc += 2;
            break;
        case 3:
            cube3();
            totalpc += 3;
            break;
        case 4:
            cube4();
            totalpc += 4;
            break;
        }
        cout << "You cube\n";
        switch (twocube) {
        case 1:
            cube1();
            totaluser++;
            break;
        case 2:
            cube2();
            totaluser += 2;
            break;
        case 3:
            cube3();
            totaluser += 3;
            break;
        case 4:
            cube4();
            totaluser += 4;
            break;
        }
        temp += totalpc;
        temp1 += totaluser;
        cout << "Total:\nPc:" << temp << endl << "User:" << temp1 << endl << endl;
        system("pause");
        game++;
    } while (game <= 2);
    int winner;
    if (temp > temp1) {
        winner = 1;
        cout << "Winner pc" << endl;
    }
    else if (temp == temp1) {
        winner = 3;
        cout << "Winner draw" << endl;
    }
    else {
        winner = 2;
        cout << "Winner user" << endl;
    }*/
    //Написать игру «GUESS MY NUMBER».
    /*int a, b, rnd, chislo;
    int vibor, jzn, total = 0, popit = 0;
    srand(time(0));
    do {
        cout << "Игра угадай число\n";
        cout << "1 - Уровень число 1 - 10 \n";
        cout << "2 - Уровень  10 - 100\n";
        cout << "3 - Выход\n";
        cin >> vibor;
        switch (vibor) {
        case 1:
        {
            cout << "1 - Уровень\n";
            a = 1;
            b = 10;
            jzn = (b - a + 1) / 2;
            rnd = a + rand() % (b - a);
            do {
                cout << "Осталось жизней ";
                cout << jzn;
                cout << "\nВведите число\n";
                cin >> chislo;
                if (chislo == rnd)
                {
                    cout << "Ура число верно!\n";
                    popit = 1;
                    win();
                }
                else {
                    cout << "-1 жизнь !\n";
                    jzn--;
                    cout << "Осталось жизней ";
                    cout << jzn << "\n";
                    do {
                        cout << "Нужна подсказка? - 1 жизнь \n";
                        cout << "1 - Да\n";
                        cout << "0 - Нет\n";
                        cin >> vibor;
                        if (vibor == 1)
                        {
                            if (chislo > rnd)
                            {
                                cout << "Число меньше\n";
                                jzn--;
                            }
                            else
                            {
                                cout << "Число больше\n";
                                jzn--;
                            }
                        }
                    } while ((vibor != 1) && (vibor != 0));
                }
            } while ((jzn > 0) && (popit == 0));
            total = jzn * 5;
            if (total == 0)
            {
                cout << "Ты проиграл \n";
                lose();
            }
            else
            {
                cout << "Ты набрал  " << total << " очков\n\n";
            }
            break;
        }
        case 2:
        {
            cout << "2 - Уровень 10 - 100 \n";
            a = 10;
            b = 100;
            jzn = (b - a + 1) / 4;
            rnd = a + rand() % (b - a);
            do {
                cout << "Осталось жизней  ";
                cout << jzn;
                cout << "\nВведите число\n";
                cin >> chislo;
                if (chislo == rnd)
                {
                    cout << "Ура число верно!\n";
                    popit = 1;
                    win();
                }
                else {
                    cout << " - 1 жизнь !\n";
                    jzn--;
                    cout << "Осталось жизней- ";
                    cout << jzn << "\n";
                    do {
                        cout << "Нужна подсказка? - 1 жизнь \n";
                        cout << "1 - Да\n";
                        cout << "0 - Нет\n";
                        cin >> vibor;
                        if (vibor == 1)
                        {
                            if (chislo > rnd)
                            {
                                cout << "Число меньше\n";
                                total--;
                            }
                            else
                            {
                                cout << "Число больше\n";
                                total--;
                            }
                        }
                    } while ((vibor != 1) && (vibor != 0));
                }
            } while ((jzn > 0) && (popit == 0));
            total = jzn * 10;
            if (total == 0 && jzn==0)
            {
                cout << "Ты проиграл\n";
                lose();
            }
            else
            {
                cout << "Ты набрал  " << total << " очков\n\n";
            }
            break;
        }
        case 3:
        {
            cout << "Спасибо за игру!";
            break;
        }
        default:
            cout << "Неправильно выбери еще раз\n";
        }
    } while (vibor != 3);*/
    //GUESS MY NUMBER V2.0
   /* int vibor, rnd;
    int round = 3, roundcount = 1;
    int jzn, chislo;
    int a, b;
    bool result = false;
    int  sumtotal = 0, total = 0, totalbot = 0;
    srand(time(0));
    cout << "Бот загадал число от 1-10 \n" << "\nУ вас 3 раунда\n";
    while (roundcount <= 3)
    {
        cout << "Раунд = " << roundcount << "\n\n";
        result = false;
        roundcount++;
        a = 1;
        b = 10;
        rnd = a + rand() % (b - a);
    

        jzn = (b - a + 1) / 2;
        totalbot = jzn * 5;

        while (result != true)
        {
            cout << "Осталось жизней ";
            cout << jzn;
            cout << "\nВведите число\n";
            cin >> chislo;
            if (chislo == rnd)
            {
                result = true;
                total = jzn * 5;
                cout << "Ты набрал  " << total << " очков\n\n";
            }
            else {
                cout << "-1жизнь!\n";
                jzn--;
                cout << "Осталось жизней ";
                cout << jzn << "\n";
                do {
                    cout << "Нужна подсказка ?-1жизнь\n";
                    cout << "1 - Да\n";
                    cout << "0 - Нет\n";
                    cin >> vibor;
                    if (vibor == 1)
                    {
                        if (chislo > rnd)
                        {
                            cout << "Число меньше\n";
                            jzn--;
                        }
                        else
                        {
                            cout << "Число больше\n";
                            jzn--;
                        }
                    }


                }

                while ((vibor != 1) && (vibor != 0));

                if (jzn <= 0)
                {
                    cout << "\nТы проиграл\n\n";

                    cout << "Бот набрал = " << totalbot << endl;
                    lose();
                    return 0;

                }
                else
                {

                }
            }
        }
        sumtotal += total;
        cout << "\nВсего  " << sumtotal << " очков\n\n";
    }
    cout << "Хотите перейти на следующий уровень Y, N \n\n";
    char vib;
    cin >> vib;
    if (vib == 'Y')
    {
        //////////// 2y uroven
        cout << "Бот загадал число 10 - 100 \n" << "\nУ вас 2 раунда \n";
        roundcount = 1;
        while (roundcount <= 2)
        {
            cout << " Раунд = " << roundcount << "\n\n";
            result = false;
            roundcount++;
            a = 10;
            b = 100;
            rnd = a + rand() % (b - a);
        
            jzn = (b - a + 1) / 2;
            totalbot = jzn * 10;
            while (result != true)
            {
                cout << "Осталось жизней ";
                cout << jzn;
                cout << "\nВведите число\n";
                cin >> chislo;
                if (chislo == rnd)
                {
                    result = true;
                    total = jzn * 10;

                    cout << "Ты набрал  " << total << " очков\n\n";
                }
                else {
                    cout << "-1жизнь!\n";
                    jzn--;
                    do {
                        cout << "Нужна подсказка ?-1жизнь\n";
                        cout << "1 - Да\n";
                        cout << "0 - Нет\n";
                        cin >> vibor;
                        if (vibor == 1)
                        {
                            if (chislo > rnd)
                            {
                                cout << "Число меньше\n";
                                jzn--;
                            }
                            else
                            {
                                cout << "Число больше\n";
                                jzn--;
                            }
                        }
                    }

                    while ((vibor != 1) && (vibor != 0));
                    if (jzn <= 0)
                    {
                        cout << "\nТы проиграл\n\n";
                        cout << "Бот набрал = " << totalbot << endl;
                        lose();
                        return 0;
                    }
                    else
                    {

                    }
                }
            }
            sumtotal += total;
            cout << "Всего  " << sumtotal << " очков\n\n";
        }
    }
    else
    {
        cout << "\nPoka\n";
    
    }
    */

}

