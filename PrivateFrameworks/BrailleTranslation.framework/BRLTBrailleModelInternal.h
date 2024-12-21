/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

@interface BRLTBrailleModelInternal : NSObject {
    void alertBraille;
    void alertScript;
    void backTranslateByCell;
    void backTranslateLocally;
    void braille;
    void brailleCache;
    void brailleSelectionDirty;
    void brailleStringDirty;
    void candidateManager;
    void candidateSelectionLanguage;
    void contentLock;
    void delegate;
    void editScript;
    void editable;
    void editingBrailleRange;
    void editingScriptRange;
    void inputTranslator;
    void isWordDescriptionActive;
    void lastScriptOutputTime;
    void outputTranslator;
    void script;
    void scriptHistory;
    void showingAlert;
    void showingTerminalOutput;
    void stageRange;
    void technicalMode;
    void translationResult;
    void wordDescriptionManager;
}

@property (nonatomic) bool backTranslateByCell;
@property (nonatomic) bool brailleStringDirty;
@property (nonatomic, readonly) NSString *bufferBrailleString;
@property (nonatomic, retain) <BRLTBrailleModelDelegate> *delegate;
@property (nonatomic, readonly) BRLTEditStringInternal *displayedBraille;
@property (nonatomic, readonly) BRLTEditStringInternal *displayedScript;
@property (nonatomic) bool editable;
@property (nonatomic, readonly) bool isCandidateSelectionActive;
@property (nonatomic) bool isWordDescriptionActive;
@property (nonatomic) bool technicalMode;

+ (id)shared;

- (void).cxx_destruct;
- (void)_resetForTest;
- (bool)backTranslateByCell;
- (bool)brailleStringDirty;
- (id)bufferBrailleString;
- (id)delegate;
- (id)displayedBraille;
- (id)displayedScript;
- (bool)editable;
- (void)forceTranslate;
- (void)handleBrailleDotPress:(id)arg1;
- (bool)handleBrailleSelectionWithNSSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)handleDeleteWithSilently:(bool)arg1;
- (bool)handleEscape;
- (bool)handleReturn;
- (void)handleWordDescriptionCommand;
- (id)init;
- (bool)isCandidateSelectionActive;
- (bool)isWordDescriptionActive;
- (long long)scriptLocationForBrailleLocation:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })scriptRangeOfBrailleCellRepresentingCharacterAt:(long long)arg1;
- (void)selectCandidate;
- (void)setAlert:(id)arg1;
- (void)setBackTranslateByCell:(bool)arg1;
- (void)setBrailleStringDirty:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setInputTableIdentifier:(id)arg1 manager:(id)arg2;
- (void)setIsWordDescriptionActive:(bool)arg1;
- (void)setOutputTableIdentifier:(id)arg1 manager:(id)arg2;
- (void)setScript:(id)arg1;
- (void)setTechnicalMode:(bool)arg1;
- (void)setTerminalOutput:(id)arg1;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousCandidate;
- (void)showPreviousWordDescription;
- (bool)technicalMode;

@end