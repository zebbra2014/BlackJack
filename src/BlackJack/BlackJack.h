/**
* @file       BlackJack.h
*
* @brief      Exceptions and constants for BlackJack
*
* @author     Ian Miers, Christina Garman and Matthew Green
* @date       June 2013
*
* @copyright  Copyright 2013 Ian Miers, Christina Garman and Matthew Green
* @license    This project is released under the MIT license.
**/

#ifndef BLACKJACK_H_
#define BLACKJACK_H_

#include <stdexcept>

#define BLACKJACK_DEFAULT_SECURITYLEVEL      80
#define BLACKJACK_MIN_SECURITY_LEVEL         80
#define BLACKJACK_MAX_SECURITY_LEVEL         80
#define ACCPROOF_KPRIME                     160
#define ACCPROOF_KDPRIME                    128
#define MAX_COINMINT_ATTEMPTS               10000
#define BLACKJACK_MINT_PRIME_PARAM           20
#define BLACKJACK_VERSION_STRING             "0.11"
#define BLACKJACK_VERSION_INT                11
#define BLACKJACK_PROTOCOL_VERSION           "1"
#define HASH_OUTPUT_BITS                    256
#define BLACKJACK_COMMITMENT_EQUALITY_PROOF  "COMMITMENT_EQUALITY_PROOF"
#define BLACKJACK_ACCUMULATOR_PROOF          "ACCUMULATOR_PROOF"
#define BLACKJACK_SERIALNUMBER_PROOF         "SERIALNUMBER_PROOF"

// Activate multithreaded mode for proof verification

//#define BLACKJACK_THREADING 1

// Uses a fast technique for coin generation. Could be more vulnerable
// to timing attacks. Turn off if an attacker can measure coin minting time.
#define BLACKJACK_FAST_MINT 1

// Errors thrown by the BlackJack library

class BlackJackException : public std::runtime_error
{
public:
   explicit BlackJackException(const std::string& str) : std::runtime_error(str) {}
};

#include "../serialize.h"
#include "../bignum.h"
#include "../util.h"
#include "Params.h"
#include "Coin.h"
#include "Commitment.h"
#include "Accumulator.h"
#include "AccumulatorProofOfKnowledge.h"
#include "CoinSpend.h"
#include "SerialNumberSignatureOfKnowledge.h"
#include "ParamGeneration.h"

#endif /* BLACKJACK_H_ */
