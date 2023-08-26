#include <iostream>
#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_session.hpp"
#include "testHeader2.h"

TEST_CASE("test func", "[Func]") {
	List list;
	list.Empty();
	SECTION("testing func") 
	{
		CHECK(list.Empty() == 1);
		CHECK(list.Size() == 0);
	}
	SECTION("Добавление 2-х элементов и проверка размера")
	{
		list.PushBack(10);
		CHECK(list.Size() == 1);
		list.PushFront(20);
		CHECK(list.Size() == 2);
	}
	SECTION("Добавление и удаление первого и последнего элемента, проверка размера")
	{
		list.PushFront(1);
		list.PushBack(2);
		list.PopFront();
		list.PopBack();
		CHECK(list.Size() == 0);
	}
	SECTION("Добавление по одному элементу в начало и конецб, проверка размера")
	{
		list.PushBack(10);
		list.PushFront(20);
		CHECK(list.Size() == 2);
	}
	SECTION("Очистка через функцию, проверка размера")
	{
		list.Clear();
		CHECK(list.Size() == 0);
	}
	}

int main()
{
	setlocale(LC_ALL, "Russian");
	return Catch::Session().run();
}