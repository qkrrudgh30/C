#include <stdio.h>

enum role {
    ROLE_TOP,
    ROLE_JUNGLE,
    ROLE_MID,
    ROLE_BOT,
    ROLE_SUP
};
typedef enum role role_t;

typedef enum champ {
    CHAMP_LEESIN,
    CHAMP_MASTER_LEE,
    CHAMP_BLITZ_CRANK
} champ_t;

typedef enum {
    TIER_BRONZE,
    TIER_SILVER,
    TIER_GOLD
} tier_t;

int main(void)
{
    role_t my_role = ROLE_SUP;
    champ_t my_champ = CHAMP_BLITZ_CRANK;
    tier_t my_tier = TIER_SILVER;

    return 0;
}



