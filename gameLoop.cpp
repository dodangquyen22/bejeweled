#include "globals.h"
#include "Menu.h"
#include <SFML/Audio.hpp>
void draw();
void mouseClick();
void movingAnimation();
void secondSwapIfNoMatch();
void matchFinding();
void getScore();
void updateGrid();
void gameLoop()
{
    sf::Clock clock;
    Menu menu(bejeweled.getSize().x, bejeweled.getSize().y);
    sf::Music music;
    music.openFromFile("audio/music.wav");
    music.setVolume(70);
    music.play();
    bool check = true;
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
                        check = 0;
                    }
                    if (menu.GetPressendItem() == 1)
                    {
                        bejeweled.close();
                    }
                }
            }
        }
        if (check != 0)
        {
            bejeweled.clear();
            bejeweled.draw(start);
            menu.draw(bejeweled);
            bejeweled.display();
        }
        if (check == 0)
        {
            mouseClick();          // xử lí chuột
            matchFinding();        // Tìm kiếm các viên kim cương trùng giống nhau theo hàng và theo cột
            movingAnimation();     // chuyển đổi vị trí của 2 viên kim cương trên màn hình và lưu lại vị trí của chúng
            getScore();            // Tính điểm
            secondSwapIfNoMatch(); // giao hoán hai viên kim cương và trả về vị trí ban đầu nếu không tạo thành các hàng và cột các viên kim cương giống nhau
            updateGrid();          // Cập nhận lại gems
            draw();                // vẽ
            if ((int)elapsed.asSeconds() == 120)
            {
                check = true;
                clock.restart();
                score = 0;
            }
        }
        elapsed = clock.getElapsedTime();
    }
}
