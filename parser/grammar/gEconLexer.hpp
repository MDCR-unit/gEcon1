/** \file
 *  This C++ header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : gEcon.g
 *     -                            On : 2019-08-25 23:36:33
 *     -                 for the lexer : gEconLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The lexer 
gEconLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram. 
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_gEconLexer_H
#define _gEconLexer_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include    <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <model.h>

extern Model model_obj;
extern std::vector<std::string> errors;





#ifdef	WIN32
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
	namespace  parser  {



    class gEconLexer;
    class gEconParser;

    template<class ImplTraits>
    class UserTraits : public antlr3::CustomTraitsBase<ImplTraits>
    {
      public:
        static const bool TOKENS_ACCESSED_FROM_OWNING_RULE = true;
        static void displayRecognitionError(const std::string &s) { errors.push_back(s); };
    };

    typedef antlr3::Traits< gEconLexer, gEconParser, UserTraits > gEconLexerTraits;
    typedef gEconLexerTraits gEconParserTraits;

typedef gEconLexerTraits gEconLexerImplTraits;


class gEconLexerTokens
{
public:
	/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
	 * \{
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = gEconLexerImplTraits::CommonTokenType::TOKEN_EOF
		, ACOS = 4 
		, AND = 5 
		, ASIN = 6 
		, AT = 7 
		, ATAN = 8 
		, BACKSLASH = 9 
		, BFALSE = 10 
		, BLOCK = 11 
		, BTRUE = 12 
		, CALIBR = 13 
		, CLETTER = 14 
		, COLON = 15 
		, COMMA = 16 
		, COMMENT = 17 
		, CONSTRAINTS = 18 
		, CONTROLS = 19 
		, COS = 20 
		, COSH = 21 
		, DBLCOLON = 22 
		, DDOT = 23 
		, DEFS = 24 
		, DELTA = 25 
		, DEQ = 26 
		, DID = 27 
		, DIDU = 28 
		, DIV = 29 
		, DOLLAR = 30 
		, DOR = 31 
		, DOUBLE = 32 
		, DQUOTE = 33 
		, E = 34 
		, EQ = 35 
		, EXCLAM = 36 
		, EXP = 37 
		, FOCS = 38 
		, ID = 39 
		, IDS = 40 
		, IDU = 41 
		, INF = 42 
		, INT = 43 
		, JACOBIAN = 44 
		, LANDSCAPE = 45 
		, LANGBR = 46 
		, LATEX = 47 
		, LBRACE = 48 
		, LBRACK = 49 
		, LEQ = 50 
		, LOG = 51 
		, LOGF = 52 
		, LONG = 53 
		, LPAREN = 54 
		, MINUS = 55 
		, MUL = 56 
		, NEQ = 57 
		, OBJ = 58 
		, OPTS = 59 
		, OR = 60 
		, OUTPUT = 61 
		, PLUS = 62 
		, PNORM = 63 
		, POW = 64 
		, PROD = 65 
		, QUESTION = 66 
		, QUOTE = 67 
		, R = 68 
		, RANGBR = 69 
		, RARROW = 70 
		, RBRACE = 71 
		, RBRACK = 72 
		, RCPP = 73 
		, RPAREN = 74 
		, SEMI = 75 
		, SETS = 76 
		, SHOCKS = 77 
		, SHORT = 78 
		, SILENT = 79 
		, SIN = 80 
		, SINH = 81 
		, SLETTER = 82 
		, SQRT = 83 
		, SS = 84 
		, SUM = 85 
		, TAN = 86 
		, TANH = 87 
		, TILDE = 88 
		, TRYREDUCE = 89 
		, UDID = 90 
		, UID = 91 
		, VERBOSE = 92 
		, WARNINGS = 93 
		, WS = 94 
		, ZERO = 95 
	};

};

/** Context tracking structure for 
gEconLexer

 */
class gEconLexer : public 
gEconLexerImplTraits::BaseLexerType
, public gEconLexerTokens
{
public:
	typedef gEconLexerImplTraits ImplTraits;
	typedef gEconLexer ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef 
gEconLexerImplTraits::BaseLexerType
 BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
public:
    gEconLexer(InputType* instream);
    gEconLexer(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );

    
     void
      mSILENT( );

     void
      mVERBOSE( );

     void
      mWARNINGS( );

     void
      mOUTPUT( );

     void
      mR( );

     void
      mLOGF( );

     void
      mLONG( );

     void
      mSHORT( );

     void
      mLATEX( );

     void
      mLANDSCAPE( );

     void
      mJACOBIAN( );

     void
      mRCPP( );

     void
      mBTRUE( );

     void
      mBFALSE( );

     void
      mOPTS( );

     void
      mSETS( );

     void
      mTRYREDUCE( );

     void
      mBLOCK( );

     void
      mDEFS( );

     void
      mCONTROLS( );

     void
      mOBJ( );

     void
      mCONSTRAINTS( );

     void
      mFOCS( );

     void
      mIDS( );

     void
      mSHOCKS( );

     void
      mCALIBR( );

     void
      mSS( );

     void
      mINF( );

     void
      mE( );

     void
      mSUM( );

     void
      mPROD( );

     void
      mDELTA( );

     void
      mSQRT( );

     void
      mEXP( );

     void
      mLOG( );

     void
      mSIN( );

     void
      mCOS( );

     void
      mTAN( );

     void
      mASIN( );

     void
      mACOS( );

     void
      mATAN( );

     void
      mSINH( );

     void
      mCOSH( );

     void
      mTANH( );

     void
      mPNORM( );

     void
      mZERO( );

     void
      mINT( );

     void
      mDOUBLE( );

     void
      mSLETTER( );

     void
      mCLETTER( );

     void
      mID( );

     void
      mUID( );

     void
      mDID( );

     void
      mUDID( );

     void
      mIDU( );

     void
      mDIDU( );

     void
      mWS( );

     void
      mTILDE( );

     void
      mQUESTION( );

     void
      mEXCLAM( );

     void
      mDOLLAR( );

     void
      mAT( );

     void
      mAND( );

     void
      mOR( );

     void
      mDOR( );

     void
      mSEMI( );

     void
      mCOLON( );

     void
      mDBLCOLON( );

     void
      mDDOT( );

     void
      mCOMMA( );

     void
      mRARROW( );

     void
      mPLUS( );

     void
      mMINUS( );

     void
      mMUL( );

     void
      mDIV( );

     void
      mPOW( );

     void
      mEQ( );

     void
      mDEQ( );

     void
      mNEQ( );

     void
      mLEQ( );

     void
      mQUOTE( );

     void
      mDQUOTE( );

     void
      mBACKSLASH( );

     void
      mLBRACE( );

     void
      mRBRACE( );

     void
      mLPAREN( );

     void
      mRPAREN( );

     void
      mLBRACK( );

     void
      mRBRACK( );

     void
      mLANGBR( );

     void
      mRANGBR( );

     void
      mCOMMENT( );

     void
      mTokens( );
    const char *    getGrammarFileName();
    void            reset();
    ~gEconLexer();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for gEconLexer
 * =============================================================================
 */
/** } */

	}


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
