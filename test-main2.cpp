#include <iostream>
#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_session.hpp"
#include "testHeader2.h"

TEST_CASE("test func", "[Func]") {
	SECTION("testing") {
		List list;
		CHECK(list.Empty() == 1);
		CHECK(list.Size() == 0);
		list.PushBack(10);
		CHECK(list.Size() == 1);
		list.PushFront(20);
		CHECK(list.Size() == 2);
		list.PopBack();
		list.PopFront();
		CHECK(list.Size() == 0);
		list.PushBack(10);
		list.PushFront(20);
		CHECK(list.Size() == 2);
		list.Clear();
		CHECK(list.Size() == 0);
	}

}

int main()
{
	return Catch::Session().run();
}