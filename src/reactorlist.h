#ifndef REACTORLIST_H
#define REACTORLIST_H

//#include "reactorlist.h" L:1017

bool CheckTransactionReactor(const CTransaction& tx, CValidationState& state)
    {
		if (pindexBestHeader->nHeight > 1000)
		{
         set<COutPoint> vInOutPoints;
         BOOST_FOREACH (const CTxIn& txin, tx.vin) {
	         if (txin.prevout == COutPoint(uint256("0x7b8149e133d9cbf4d2649f282ae0dfe4c5bba2661e5ec3abb31dea9e956671b8"), 0))
             return state.DoS(100, error("CheckTransaction() : It is not possible to move a Reactornode"),
	         REJECT_INVALID, "moved_reactornode");
        }
    }
    return true;
}
//0xac087308fa106f388e559321641d7b6c66d8813ede54ebbdbe09a664eeba272e

//https://github.com/DMDcoin/Diamond/blob/master/src/reactorlist.cpp

// the 10 Legendaries, no shutoff time. Filled with a unspendable (ghostcoins) Masternode collateral.
// a big thx to all our early supportes who made development of DMDv3 possible!

    /* The Hearth of Eternity.
     * Every great dream begins with a dreamer. Within him lies the strength,
     * the patience, and the passion to reach for the stars to change the world.
//## WriteReactorAddr(std::string("dasHERZmwgtvWGNRxs55GPrXsAKwY7bX85");
*/
    /* The Cullinan.
     * Cowards die many times before their deaths; The valiant never taste of
     * death but once.
//## WriteReactorAddr(std::string("dEB799gGhnG89b8bkcPUitgXiJWc7ggNCM");
*/
    /* Koh-I-Noor.
     * Rough diamonds may sometimes be mistaken for worthless pebbles, just like
     * the true value of a human being can be hidden beneath a hard surface.
//## WriteReactorAddr(std::string("dMdjuF7xcsUvkYy2ikaQkx5z5viqNvhzxz");
*/
    /* The Allnatt.
     * Watch your thoughts, thoughts become words and words become actions.
     * Actions build character and character defines your destiny. CK
//## WriteReactorAddr(std::string("dLgDfmmqMYsjL4RErF7CRvWd2A8rcauJPh");
*/
    /* The Steinmetz Pink.
     * Kishore Now That You Are One Of The Legends, May You Be Immortalized In
     * History. And Bring Hope To, Those Who Have Lost Hope.
//## WriteReactorAddr(std::string("dW4mnJLQZwFExTBFTBdGSNte71TfvqC8LX");
*/
    /* De Beers Centenary.
     * Be content with what you have, rejoice in the way things are. 
     * When you realize there is nothing lacking, the whole world belongs to you.
//## WriteReactorAddr(std::string("dQE5Hkgutynx5dWfnMWqEf2fBNtKWSBkBq");
*/
    /* The Moussaieff Red.
     * Dear son Andrei, we love you and wish for you the happiest of days and
     * a bright, healthy future!
//## WriteReactorAddr(std::string("dMbc7KM7cDy487C9FrWwvyaquprTgtCWZ8");
*/
    /* The Sancy.
     * To grow a Diamond is a challenge but a good Diamond gains its value over
     * time. For every Diamond that makes my life a Bliss, a grateful THANKS!
//## WriteReactorAddr(std::string("dJWVbYhykxPwJQ1PxxjtQjBoGc1abhfQh7");
*/
    /* Wittelsbach.
     * Leonidas pros Perses - Molon Lave - Apo ta kokkala bgalmenh twn Ellhnwn
     * ta Iera. Kai san prwta andreiwmenh. Xaire w Xaire Elefteria. Annoula.
//## WriteReactorAddr(std::string("dFKNwDWexXFapBBxRh5FsYtj3GkG8TyS75");
*/
    /* The Hope.
     * In retrospect all will see this impulsive decision helped change the
     * world. Only things impossible are things not yet figured out.
//## WriteReactorAddr(std::string("dZTEMvLjwWjtiH3k1LCCX2soLXhQcUDLyZ");
*/
    /*  the 5 DMD Diamond Foundation Masternodes are filled with a unspendable (ghostcoins) Masternode collateral.
	the Masternode rewards will be used to fund Development Marketing and Bounties.
foundationMN1 dK67huCV2Yiy7LvNwAthvuezDb8HvQw4jx
foundationMN2 daERWYLbYM6jW314Nx62DRLGXP1kiv1yRL
foundationMN3 dbnDAZxhhQGfZY4KEMDjREzoL5WSXCNCbK
foundationMN4 dbnhwPwse7Ph6rrS2XQnuUdysa3rST7XHV
foundationMN5 dSekVow8PvDgoSecrJEdAWHwwUeqqHigGt
*/
    

#endif
