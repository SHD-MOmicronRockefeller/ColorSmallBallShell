#pragma once
#define __mod_log__ 2

#if __mod_log__ == 1
    #define __DEBUG__
#endif
#if __mod_log__ == 2
    #define __RELEASE__
#endif

#if __mod_log__ == -1
    #define __DEFAULT__
#endif
