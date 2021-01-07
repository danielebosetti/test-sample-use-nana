#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
int main()
{
    using namespace nana;
    form fm;
    label lb{ fm, rectangle{ 10, 10, 100, 100 } };
    lb.caption("Hello, world!");
    fm.show();
    exec();
}