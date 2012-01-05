//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'cfg_lexique.h'                            *
//                    Generated by version version 2.2.7                     *
//                     december 2nd, 2011, at 14h25'15"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1


#ifndef cfg_5F_lexique_CLASS_DEFINED
#define cfg_5F_lexique_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                    E X T E R N    R O U T I N E S                         *
//                                                                           *
//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*
//                                                                           *
//                    E X T E R N    F U N C T I O N S                       *
//                                                                           *
//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*
//                                                                           *
//                       T O K E N    C L A S S                              *
//                                                                           *
//---------------------------------------------------------------------------*

class cTokenFor_cfg_5F_lexique : public cToken {
  public : PMUInt64 mLexicalAttribute_integer ;
  public : C_String mLexicalAttribute_keyword ;
  public : C_String mLexicalAttribute_number ;
  public : C_String mLexicalAttribute_string ;

  public : cTokenFor_cfg_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     S C A N N E R    C L A S S                            *
//                                                                           *
//---------------------------------------------------------------------------*

class C_Lexique_cfg_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_cfg_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_cfg_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_cfg_5F_lexique (void) {}
  #endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_idf,
   kToken_string,
   kToken_uint,
   kToken_tp_5F_ns_5F_per_5F_counter_5F_tick,
   kToken_stack_5F_alignment,
   kToken_task,
   kToken_isr,
   kToken_isr_5F_code,
   kToken_counter_5F_code,
   kToken_interrupts,
   kToken_uint_38_,
   kToken_sint_38_,
   kToken_uint_31__36_,
   kToken_sint_31__36_,
   kToken_uint_33__32_,
   kToken_sint_33__32_,
   kToken_uint_36__34_,
   kToken_sint_36__34_,
   kToken__3B_,
   kToken__3D_,
   kToken__7B_,
   kToken__7D_,
   kToken__5B_,
   kToken__5D_} ;

//--- Key words table 'cfg_keywords'
  public : static PMSInt16 search_into_cfg_keywords (const C_String & inSearchedString) ;

//--- Key words table 'cfg_type'
  public : static PMSInt16 search_into_cfg_type (const C_String & inSearchedString) ;

//--- Key words table 'cfg_delimiters'
  public : static PMSInt16 search_into_cfg_delimiters (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_luint_36__34_ synthetizedAttribute_integer (void) const ;
  public : GALGAS_lstring synthetizedAttribute_keyword (void) const ;
  public : GALGAS_lstring synthetizedAttribute_number (void) const ;
  public : GALGAS_lstring synthetizedAttribute_string (void) const ;


//--- Attribute access
  public : PMUInt64 attributeValue_integer (void) const ;
  public : C_String attributeValue_keyword (void) const ;
  public : C_String attributeValue_number (void) const ;
  public : C_String attributeValue_string (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Append terminal message
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const PMSInt16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get terminal count
  public : virtual PMSInt16 terminalVocabularyCount (void) const { return 24 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_cfg_5F_lexique & inToken) ;
} ;

//---------------------------------------------------------------------------*

#endif
