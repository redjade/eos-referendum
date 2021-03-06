/* Licence: https://github.com/eos-referendum/master/LICENCE.md */

/*
 * File:   referendum_declarations.hpp.hpp
 * Author: Michael Fletcher | EOS42
 *
 * Created on 16 May 2018, 17:26
*/

#include <string>

namespace referendum {

   /* vote config */
    const static uint8_t MINIMUM_VOTE_PARTICIPATION_PERCENTAGE = 15;
    const static uint8_t REFERENDUM_VOTE_PERIOD_DAYS = 120;
    const static uint8_t SUSTAINED_VOTE_PERIOD_DAYS = 30;
    const static uint8_t YES_LEADING_VOTE_PERCENTAGE = 10;
    const static char* VOTE_NAME = "EOS42 Test Vote";
    const static char* VOTE_DESCRIPTION = "A test contract";
    const static double TOTAL_AVAILABLE_EOS = 1000000000;

   /* vote options */ 
   const static uint8_t VOTE_SIDE_YES = 1;
    const static uint8_t VOTE_SIDE_NO = 0;
    const static uint8_t NULL_VOTE = NULL;
  
    /*time tags in seconds*/ 
    const static uint64_t TIME_SECOND = 1;
    const static uint64_t TIME_MINUTE = 60 * TIME_SECOND; 
    const static uint64_t TIME_HOUR = 60 * TIME_MINUTE;
    const static uint64_t TIME_DAY = 24 * TIME_HOUR;
    const static uint64_t TIME_WEEK = 7 * TIME_DAY;
}
