/*****************************************************
 *	C++ code generated with Nana Creator (0.28.0)
 *	GitHub repo: https://github.com/besh81/nana-creator
 *
 * PLEASE EDIT ONLY INSIDE THE TAGS:
 *		//<*tag
 *			user code
 *		//*>
*****************************************************/

#ifndef SAMPLE_H
#define SAMPLE_H

#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/group.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/textbox.hpp>

//<*includes

//*>


class sample
	: public nana::form
{
public:
	sample(nana::window wd, const ::nana::size& sz = {640, 480}, const nana::appearance& apr = {true, true, false, false, false, false, false})
		: nana::form(wd, sz, apr)
	{
		init_();

		//<*ctor

		//*>
	}

	~sample()
	{
		//<*dtor

		//*>
	}


private:
	void init_()
	{
		_place.bind(*this);
		_place.div("margin=[5,5,5,5] <grid=[3,3] margin=[5,5,5,5] gap=2 grid1>");
		caption("Form");
		// group1
		group1.create(*this);
		group1.div("margin=[5,5,5,5] gap=2 _field_");
		group1.caption("group");
		_place["grid1"] << group1;
		// button3
		button3.create(group1);
		group1["_field_"] << button3;
		button3.caption("button");
		// button1
		button1.create(group1);
		group1["_field_"] << button1;
		button1.caption("button");
		// button2
		button2.create(group1);
		group1["_field_"] << button2;
		button2.caption("button");
		// label1
		label1.create(*this);
		_place["grid1"] << label1;
		label1.caption("asdasdasd");
		// textbox1
		textbox1.create(*this);
		_place["grid1"] << textbox1;

		_place.collocate();
		group1.collocate();
	}


protected:
	nana::place _place;
	nana::group group1;
	nana::button button3;
	nana::button button1;
	nana::button button2;
	nana::label label1;
	nana::textbox textbox1;


	//<*declarations

	//*>
};

#endif //SAMPLE_H

