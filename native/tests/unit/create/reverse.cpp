/**
 * @file
 * \ingroup unittest
 */
#include "unary.hpp"


/** Verify that the reverse function compiles and can be run without issue */
/** Test the Create::reverse function */
void reverse() {
    unary<Expression::BV, Op::Reverse, Create::reverse>();
}

// Define the test
UNITTEST_DEFINE_MAIN_TEST(reverse)
