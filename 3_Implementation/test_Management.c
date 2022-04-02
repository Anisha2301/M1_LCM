#include"unity.h"
#include"library_Management_system.h"

void setUp(){}

void tearDown(){}


void test_add_book(void){
    TEST_ASSERT_EQUAL(pass,add_book(125, "Ajay", "Dragon"));
}

void test_viewbook(void){
    TEST_ASSERT_EQUAL(pass,view_book());
}

void test_searchbook(void){
    TEST_ASSERT_EQUAL(fail,search_book(-2));
    TEST_ASSERT_EQUAL(pass,search_book(125));
}



void test_deletebook(void){
    TEST_ASSERT_EQUAL(pass,delete_book(125));
}        

void test_issuebook(void){
    TEST_ASSERT_EQUAL(pass,issue_book(125));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_add_book);
    RUN_TEST(test_searchbook);
    RUN_TEST(test_issuebook);
    RUN_TEST(test_deletebook);
    RUN_TEST(test_viewbook);
    
    return UNITY_END();
}