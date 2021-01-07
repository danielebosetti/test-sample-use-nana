
#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/group.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/textbox.hpp>

#include <iostream>
#include <functional>
#include "sample.h"

/*auto clickHandler = [](const arg_click& arg) {
    auto pos = arg.mouse_args->pos;
    std::cout << "arg=" << pos.x << " " << pos.y << std::endl;
};*/

using std::cout;
using std::endl;

int main()
{
    using namespace nana;
    const rectangle rect = { 20, 20, 640, 480 };
    form fm{ rect };
    fm.caption("example app");

    auto keyHandler = [](const arg_keyboard& arg) {
        auto key = arg.key;
        std::wcout << key;
        if (key == 27) {
            std::cout << "ESC key pressed, closing\n";
            API::exit();
        }
    };

    //fm.events().click(clickHandler);
    fm.events().key_press(keyHandler);

    label hello{ fm, "label" };

    button btn(fm, rectangle{ 20, 20, 150, 30 });
    btn.caption(L"click me");
    button btnClear(fm, rectangle{ 170, 20, 150, 30 });
    btnClear.caption(L"clear");

    label label1(fm, rectangle{ 20, 60, 150, 30 });
    label1.caption("caption");

    textbox txtName1( fm, rectangle{ 20, 100, 150, 30 });

    label label2(fm, rectangle{ 20, 140, 150, 30 });
    label2.caption("_______");

    textbox txtName2(fm, rectangle{ 20, 180, 150, 150 });

    auto btnClickHandler = [&](const arg_click& arg) {
        //std::cout << "click: code=" << arg.mouse_args->evt_code << endl;
        cout << "click" << endl;
        label1.caption("clicked");

        label1.caption(txtName1.text());

        txtName2.append("agh\n", false);
    };

    btn.events().click(btnClickHandler);
    btnClear.events().click([&](const arg_click& arg) {
        txtName2.reset();
        });

    fm.show();
    exec();
    return 0;
}



