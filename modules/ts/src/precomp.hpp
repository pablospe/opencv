#include "cvconfig.h"
#include "opencv2/core/utility.hpp"
#include "opencv2/core/private.hpp"
#include "opencv2/ts.hpp"

#ifdef GTEST_LINKED_AS_SHARED_LIBRARY
#error ts module should not have GTEST_LINKED_AS_SHARED_LIBRARY defined
#endif
