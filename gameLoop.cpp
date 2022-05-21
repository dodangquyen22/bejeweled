#include "globals.h"
#include "Menu.h"
#include <unistd.h>
void draw();
void mouseClick();
void movingAnimation();
void secondSwapIfNoMatch();
void matchFinding();
void getScore();
void updateGrid();
// void Times();
void gameLoop()
{
    Menu menu(bejeweled.getSize().x, bejeweled.getSize().y);
    int count;
    while (bejeweled.isOpen())
    {
        Event event1;
        while (bejeweled.pollEvent(event1))
        {
            if (event1.type == Event::Closed)
            {
                bejeweled.close();
            }
            if (event1.type == Event::MouseButtonReleased)
            {
                if (event1.mouseButton.button == Mouse::Left)
                {
                    if (!isSwap && !isMoving)
                        click++;
                    pos = Mouse::getPosition(bejeweled) - offset;
                }
            }
            if (event1.type == Event::KeyReleased)
            {
                if (event1.key.code == sf::Keyboard::Up)
                {
                    menu.MoveUp();
                }
                if (event1.key.code == sf::Keyboard::Down)
                {
                    menu.MoveDown();
                }
                if (event1.key.code == sf::Keyboard::Return)
                {

                    if (menu.GetPressendItem() == 0)
                    {
                        count = 0;
                    }
                    if (menu.GetPressendItem() == 1)
                    {
                        bejeweled.close();
                    }
                }
            }
        }
        if (count != 0)
        {
            bejeweled.clear();
            bejeweled.draw(start);
            menu.draw(bejeweled);
            bejeweled.display();
        }
        if (count == 0)
        {
            // Times();
            mouseClick();          // xử lí chuột
            matchFinding();        // Tìm kiếm các viên kim cương trùng giống nhau theo hàng và theo cột
            movingAnimation();     // chuyển đổi vị trí của 2 viên kim cương trên màn hình và lưu lại vị trí của chúng
            getScore();            // Tính điểm
            secondSwapIfNoMatch(); // giao hoán hai viên kim cương và trả về vị trí ban đầu nếu không tạo thành các hàng và cột các viên kim cương giống nhau
            updateGrid();
            draw(); // vẽ
        }
    }
    // int sec = 120;
    // while (sec > 0)
    // {
    //     system("cls");
    //     sec--;
    //     sleep(1);
    //     while (bejeweled.isOpen())
    //     {
    //         Event event2;
    //         while (bejeweled.pollEvent(event2))
    //         {
    //             if (event2.type == Event::Closed)
    //             {
    //                 bejeweled.close();
    //             }
    //         }
    //     }
    //     if (sec == 0)
    //     {
    //         while (bejeweled.isOpen())
    //         {
    //             bejeweled.close();
    //         }
    //     }
    // }
}
